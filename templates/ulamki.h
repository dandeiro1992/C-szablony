#ifndef ULAMKI_H
#define ULAMKI_H
#include <iostream>
#include <cmath>

class Ulamki
{
public:
    Ulamki();
    Ulamki(int x, int y);
    class mianownik_rowny_0 {
    public:
        mianownik_rowny_0()
        {
            std::cout<<"dzielenie przez 0\n";
        }
    };
    Ulamki operator+(const Ulamki &u);// pierwsza funkcja dodawania
    Ulamki operator-(const Ulamki &u);// funkcja odejmowania (c=a-b)
    Ulamki operator*(const Ulamki &u);// funkcja mnożenia (c=a*b)
    Ulamki operator/(const Ulamki &u);// funkcja dzielenia (c=a/b)
//  Ulamki* operator+( const Ulamki *u); // druga funkcja dodawania
//  Ulamki* operator+( const Ulamki &u);  //trzecia funkcja dodawania

    //operator jednoargumentowy
    Ulamki* operator+=(Ulamki &u);

    // operator porównania
    bool operator==(Ulamki &u);

    friend std::ostream& operator<<(std::ostream &,  Ulamki const &);
    static int ea(int a, int b);
    int getLicznik() const;
    void setLicznik(int value);

    int getMianownik() const;
    void setMianownik(int value);

private:
    int licznik;
    int mianownik;
};

#endif // ULAMKI_H
