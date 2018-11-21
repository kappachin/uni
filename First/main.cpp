#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void printline(){
cout<<endl<<"========================================================"<<endl;
}
void tabdisplay(int rozmiar, int tab[])
{
for (int a = 0; a<rozmiar;a++){
    cout<<tab[a]<<" ";
    }
}

int los(int minimum, int maksimum);
int losTab(int rozmiar, int tab[]);
int MaxTab(int rozmiar,int tab[]);
int MinTab(int rozmiar,int tab[]);
void sortowanie( int rozmiar ,int tab[] );

int main()
{
    srand(time( NULL ));
    const int r = 100;
    int tab[r];
    losTab(r,tab);
    tabdisplay(r,tab);
    printline();
    sortowanie(r,tab);
    cout<<endl<<"max wartosc to :"<<MaxTab(r,tab)<<endl;
    cout<<endl<<"min wartosc to :"<<MinTab(r,tab)<<endl;
    printline();
    tabdisplay(r,tab);


    return 0;
}


int los(int minimum, int maksimum){
return minimum + rand() % (( maksimum + 1 ) - minimum);
}

int losTab(int rozmiar, int tab[]){
for (int a = 0;a<rozmiar;a++){
    tab[a] = los(0,999);
    }
    return 0;
}

int MaxTab(int rozmiar,int tab[]){

return tab[(rozmiar -1)];
}
int MinTab(int rozmiar,int tab[]){

return tab[(rozmiar -rozmiar)];
}

void sortowanie( int rozmiar ,int tab[] )
{
    for( int i = 0; i < rozmiar; i++ )
    {
        for( int j = 0; j < rozmiar - 1; j++ )
        {
            if( tab[ j ] > tab[ j + 1 ] )
                 swap( tab[ j ], tab[ j + 1 ] );

        }
    }
}
