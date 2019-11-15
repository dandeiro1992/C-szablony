#include <stdio.h>
#include <iostream>
#include "ulamki.h"

using namespace std;

int main()
{

    Ulamki *pierwszy=new Ulamki(1,2);
    Ulamki *drugi=new Ulamki(1,2);
    Ulamki *trzeci=new Ulamki();
    //*trzeci=(*pierwszy+*drugi);
    cout<<"licznik\t"<<trzeci->getLicznik()<<"\t mianownik \t"<<(*trzeci).getMianownik()<<"\n";
    cout<<"licznik\t"<<(*pierwszy).getLicznik()<<"\t mianownik \t"<<(*pierwszy).getMianownik()<<"\n";
    Ulamki a=Ulamki(1,2);
    Ulamki b=Ulamki(2,4);

//     /////////////pierwsza funkcja dodawania (nie zmienia a ale zmienia c)
    cout<<"a:\t"<<a<<"\n";
    //a=a+b;
    try {
        //a=a/(*pierwszy);
    } catch (...) {
        cout<<"wystąpił wyjątek\n";
    }
    //a+=b;
    cout<<a;
//    //////// druga funkcja dodawania (zmienia a i przyjmuje jako drugi argument wskaźnik do obiektu typu ulamek)
//    a+(drugi);
//    a+&b;
    // trzecia funkcja dodawania
    //a+b; //działa
    //a+*pierwszy; //działa


    cout<<"a:\t"<<a<<"\n";
    cout<<"b:\t"<<b<<"\n";
    cout<<(a==b)<<"\n";
    return 0;
}
