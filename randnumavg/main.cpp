#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
   // int suma;
    int tab[100];
  //  int ilosc = sizeof(tab);
    int temp1;
    srand(time(NULL));      //rand seed based on current sys time clock

    for(int i= 0; i<100;i++){


        tab[i]= 0 + rand() %1000;
        cout<<tab[i]<<endl;


    }

   /* for(int b =0 ; b<100;b++){
        suma += tab[b];
        ilosc++;

    }                                                               //srednia
     double srednia = suma/ilosc;
    cout<<"srednia to: "<<srednia<<endl; */
    cout<<"========================================"<<endl;


  /*
   for(int d = 0; d<100;d++){
        for(int k = 0; k<100;k++){
        if(tab[k] > tab[k+1]){                                                                  //bubble sort 2x for
        temp1 = tab[k];
       // temp2 = tab [k+1];
        tab[k] = tab[k+1];
        tab[k+1] = temp1;
        }
        }

    }
    */
    bool zmiana ;   // bool for do while loop

        do{
                zmiana = false;   //setting bool to false
            for(int k = 0; k<99;k++){
            if(tab[k] > tab[k+1]){

        temp1 = tab[k];
        tab[k] = tab[k+1];
        tab[k+1] = temp1;
        zmiana = true;        //if swap happend set bool to true
        }
            }
        }while(zmiana); //do while bool is true

    for(int mm = 0; mm<100; mm++){
        cout<<tab[mm]<<endl;
    }

    return 0;
}
