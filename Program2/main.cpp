#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   ifstream moj_plik;
    moj_plik.open("kol.txt");
    bool czy_ok;
     czy_ok=moj_plik.good();
    cout<<"Status otwarcia pliku: "<<czy_ok<<endl;

//wczytaj wymiary
int w;
 cout<<"Liczba wierszy: ";
 cin>>w;
if (w >20){

    cout<<"nie udalo sie pobrac liczb";
}else{

int* tab = new int [w]; //alokacja pamieci
for ( int i = 0; i < w; ++i) //wpisanie wartosci do tablicy
 moj_plik>>tab[i];
//wypisz tab[w]
for ( int i = 0; i < w; ++i)
 cout<<tab[i]<<'\t';
 cout<<endl;




int* tab2 = new int [w]; //alokacja pamieci
for ( int i = 0; i < w; ++i){ //wpisanie wartosci do tablicy
    int i2 = (w-i) -1;

 tab2[i]=tab[i2];
}
//wypisz tab[w]
cout<<"liczby w 2 tablicy: "<<endl;
for ( int i = 0; i < w; ++i)
 cout<<tab2[i]<<'\t';
 cout<<endl;
 //zniszcz tab
delete [] tab; //uwolnienie pamieci
 tab = NULL;

//zniszcz tab
delete [] tab2; //uwolnienie pamieci
 tab2 = NULL;
}
    return 0;
}
