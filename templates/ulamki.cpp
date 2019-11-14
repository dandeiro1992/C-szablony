#include "ulamki.h"

int Ulamki::ea(int a, int b)
{
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
        this->licznik=-x;
        this->mianownik=-y;
    }
    else
    {
        this->licznik=x;
        this->mianownik=y;
    }

}
std::ostream& operator<<(std::ostream &s, Ulamki const &u)
{
    return s<<u.getLicznik()<<"/"<<u.getMianownik()<<"\n";
}


/////////// pierwsza funkcja dodawania
//Ulamki Ulamki::operator+(const Ulamki & u)
//{
//    int licznik=this->licznik*u.mianownik+u.licznik*this->mianownik;
//    int mianownik=u.mianownik*this->mianownik;
//    int c=ea(licznik,mianownik);
//    licznik/=c;
//    mianownik/=c;
//    return Ulamki(licznik,mianownik);
//}
///////////druga funkcja dodawania
Ulamki* Ulamki::operator+(const Ulamki * u)
{
    this->licznik=this->licznik*u->mianownik+u->licznik*this->mianownik;
    this->mianownik=u->mianownik*this->mianownik;
    int c=ea(this->licznik,this->mianownik);
    this->licznik/=c;
    this->mianownik/=c;
    return this;
}
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

