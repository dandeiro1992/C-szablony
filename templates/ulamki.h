#ifndef ULAMKI_H
#define ULAMKI_H
#include <iostream>

class Ulamki
{
public:
    Ulamki();
    Ulamki(int x, int y);
    class mianownik_rowny_0 {};
//  Ulamki operator+(const Ulamki &u);// pierwsza funkcja dodawania
    Ulamki* operator+( const Ulamki *u); // druga funkcja dodawania
//  Ulamki* operator+( const Ulamki &u);  //trzecia funkcja dodawania
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
