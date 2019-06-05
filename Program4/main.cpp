#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Wypisz(char tab[][]);
void Wypelnij(char(*t)[5],int r);
void WstawZnak(int ile);

int main()
{
    srand(time(NULL));      //rand seed based on current sys time clock
    const int r = 5;
    char *tab[r][r];
    Wypelnij("#",r);
    Wypisz(tab);
    WstawZnak(3);
    return 0;
}

void Wypisz(char tab[][]){

             for(int a = 0; a<5;a++){ //wyswietlenie tablicy
            for(int b = 0;b<5;b++){
                cout<<tab[a][b];
                }
                cout<<endl;
            }

}
void Wypelnij(char(*t)[5],int r){
 for(int a = 0; a<5;a++){ //wypa³nienie tablicy znakiem "#"
            for(int b = 0;b<5;b++){
                tab[a][b] = *t;
                }
            }
}

void WstawZnak(int ile){
 cout<<"Podaj ile znakow ma byc wstawione"<<endl;


        cin>>ile; //ile razy wstawic znak
        int x,y;
        for(int z =0; z<ile;z++){
         x=rand()%(5+1);  //losowanie
         y=rand()%(5+1);

         tab[x][y] = "%"; //zmiana znaku

          for(int a = 0; a<5;a++){ //wyswietlenie tablicy
            for(int b = 0;b<5;b++){
                cout<<tab[a][b];
                }
                cout<<endl;
            } cout<<endl<<endl;
        }
}
