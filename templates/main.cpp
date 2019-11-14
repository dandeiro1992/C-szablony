#include <stdio.h>
#include <iostream>
#include "ulamki.h"

using namespace std;

int main()
{

    Ulamki *pierwszy=new Ulamki(5,6);
    Ulamki *drugi=new Ulamki(1,2);
    Ulamki *trzeci=new Ulamki();
    //*trzeci=(*pierwszy+*drugi);
    cout<<"licznik\t"<<trzeci->getLicznik()<<"\t mianownik \t"<<(*trzeci).getMianownik()<<"\n";
    cout<<"licznik\t"<<(*pierwszy).getLicznik()<<"\t mianownik \t"<<(*pierwszy).getMianownik()<<"\n";
    Ulamki a=Ulamki(4,5);
    Ulamki b=Ulamki(8,9);

    // pierwsza funkcja dodawania (nie zmienia a ale zmienia c)
//    cout<<"a:\t"<<a<<"\n";
//    Ulamki c=a+b;
//    cout<<c;
    //////// druga funkcja dodawania (zmienia a i przyjmuje jako drugi argument wskaźnik do obiektu typu ulamek)
    a+(drugi);
    a+&b;
    // trzecia funkcja dodawania
    //a+b; //działa
    //a+*pierwszy; //działa
    cout<<"a:\t"<<a<<"\n";
    cout<<"b:\t"<<b<<"\n";
    return 0;
}
