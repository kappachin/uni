#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

     srand(time(NULL));      //rand seed based on current sys time clock
   // const int r = 5;
        char *tab[5][5];
        char *k = "#";
        for(int a = 0; a<5;a++){ //wypa³nienie tablicy znakiem "#"
            for(int b = 0;b<5;b++){
                tab[a][b] = k;
                }
            }

             for(int a = 0; a<5;a++){ //wyswietlenie tablicy
            for(int b = 0;b<5;b++){
                cout<<tab[a][b];
                }
                cout<<endl;
            }
        cout<<"Podaj ile znakow ma byc wstawione"<<endl;

        int ile;
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



    return 0;
}
