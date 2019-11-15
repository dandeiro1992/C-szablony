#include "ulamki.h"

int Ulamki::ea(int a, int b)
{
    if(a==0)
        return 1;
    a=abs(a);
    b=abs(b);
    while(a!=b)
           if(a>b)
               a-=b;
           else
               b-=a;
        return a;
}

Ulamki::Ulamki()
{
    this->licznik=0;
    this->mianownik=1;
}
Ulamki::Ulamki(int x, int y)
{
    if(y==0)
    {
        throw mianownik_rowny_0();
    }
    if(y<0)
    {
        int c=ea(x,y);
        this->licznik=-x/c;
        this->mianownik=-y/c;
    }
    else
    {
        int c=ea(x,y);
        this->licznik=x/c;
        this->mianownik=y/c;
    }

}
std::ostream& operator<<(std::ostream &s, Ulamki const &u)
{
    return s<<u.getLicznik()<<"/"<<u.getMianownik()<<"\n";
}


/////////// pierwsza funkcja dodawania
Ulamki Ulamki::operator+(const Ulamki & u)
{
    int licznik=this->licznik*u.mianownik+u.licznik*this->mianownik;
    int mianownik=u.mianownik*this->mianownik;
    int c=ea(licznik,mianownik);
    licznik/=c;
    mianownik/=c;
    return Ulamki(licznik,mianownik);
}
///////////druga funkcja dodawania
//Ulamki* Ulamki::operator+(const Ulamki * u)
//{
//    this->licznik=this->licznik*u->mianownik+u->licznik*this->mianownik;
//    this->mianownik=u->mianownik*this->mianownik;
//    int c=ea(this->licznik,this->mianownik);
//    this->licznik/=c;
//    this->mianownik/=c;
//    return this;
//}
//////////// trzecia funkcja dodawania
//Ulamki* Ulamki::operator+(const Ulamki & u)
//{
//    this->licznik=this->licznik*u.mianownik+u.licznik*this->mianownik;
//    this->mianownik=u.mianownik*this->mianownik;
//    int c=ea(this->licznik,this->mianownik);
//    this->licznik/=c;
//    this->mianownik/=c;
//    return this;
//}

////////////// odejmowanie według pierwszego sposobu
Ulamki Ulamki::operator-(const Ulamki & u)
{
    int licznik=this->licznik*u.mianownik-u.licznik*this->mianownik;
    int mianownik=u.mianownik*this->mianownik;
    int c=ea(licznik,mianownik);
    licznik/=c;
    mianownik/=c;
    return Ulamki(licznik,mianownik);
}

/////////// mnożenie według pierwszego sposobu
Ulamki Ulamki::operator*(const Ulamki & u)
{
    int licznik=this->licznik*u.licznik;
    int mianownik=u.mianownik*this->mianownik;
    int c=ea(licznik,mianownik);
    licznik/=c;
    mianownik/=c;
    return Ulamki(licznik,mianownik);
}

/////////// dzielenie według pierwszego sposobu
Ulamki Ulamki::operator/(const Ulamki & u)
{
    if(u.licznik==0)
        throw mianownik_rowny_0();
    int licznik=this->licznik*u.mianownik;
    int mianownik=u.licznik*this->mianownik;
    int c=ea(licznik,mianownik);
    licznik/=c;
    mianownik/=c;
    return Ulamki(licznik,mianownik);
}

// operatory jednoargumentowe
Ulamki* Ulamki::operator+=(Ulamki &u)
{
    this->licznik=this->licznik*u.mianownik+u.licznik*this->mianownik;
    this->mianownik=u.mianownik*this->mianownik;
    int c=ea(this->licznik,this->mianownik);
    this->licznik/=c;
    this->mianownik/=c;
    return this;
}

//operator bool
bool Ulamki::operator==(Ulamki &u)
{
    if((this->licznik==u.licznik)&&(this->mianownik==u.mianownik))
        return 1;
    else
        return 0;
}
int Ulamki::getLicznik() const
{
    return licznik;
}

void Ulamki::setLicznik(int value)
{
    licznik = value;
}

int Ulamki::getMianownik() const
{
    return mianownik;
}

void Ulamki::setMianownik(int value)
{
    mianownik = value;
}

