#include <iostream>
#include <fstream>   // WAZNA BIBLIOTEKA

using namespace std;

int Czytaj(const char nazwa[], float *tab, int rozmiar);  //3ci wariant
void TabDisp(int rozmiar, float *tab);   //jesli 2gi i 3ci wariant
void sor(int rozmiar, float *tab);
void Zapisz(const char nazwa[], float *tab, int rozmiar);

int main()
{

    const int rozmiar = 10;
    float tab[rozmiar];
/*
    ifstream moj_plik;
    moj_plik.open("JP/tablica.txt");

    bool czy_ok;
    czy_ok=moj_plik.good();
      cout<<"Status otwarcia pliku: "<<czy_ok<<endl;

    float x;
    moj_plik>>x;
    cout<<"Pobrana liczba to: "<<endl<<x<<"  ";

    for(int i=0;i<8;i++)
    {
        if(moj_plik.good()==1)
        {
        moj_plik>>x;
        cout<<"  "<<x<<"  ";
        }
        else
        {
            return 0;
        }
    }
    */



    int ilosc = Czytaj("tablica.txt",tab,rozmiar);
    TabDisp(ilosc,tab);
    sor(ilosc,tab);

        cout<<endl<<endl;
        TabDisp(ilosc,tab);
    Zapisz("sort.txt",tab,ilosc);
    return 0;
}
int Czytaj(const char nazwa[], float *tab, int rozmiar){
    int i = 0;
    fstream plik;
    plik.open(nazwa);
    bool if_ok;
    if_ok = plik.good();
    cout<<"status otwarcia"<<if_ok<<endl;

    while(plik.good() && i<rozmiar  ){
        plik>>tab[i++];

    }
    plik.close();

return i;

}
void TabDisp(int rozmiar, float *tab){
for(int s = 0; s<rozmiar;s++){
    cout<<tab[s]<<"  ";
}
        return;
}

void sor(int rozmiar, float *tab){
        float temp1;
  for(int d = 0; d<rozmiar;d++){
        for(int k = 0; k<rozmiar;k++){
        if(tab[k] > tab[k+1]){                                                                  //bubble sort 2x for
        temp1 = tab[k];
       // temp2 = tab [k+1];
        tab[k] = tab[k+1];
        tab[k+1] = temp1;
        }
        }
    }
}
void Zapisz(const char nazwa[], float *tab, int rozmiar){
 int i = 0;
    fstream plik;
    plik.open(nazwa);
    bool if_ok;
    if_ok = plik.good();
    cout<<"status otwarcia"<<if_ok<<endl;

    for(int i =0; i<rozmiar; i++){
        plik<<tab[i]<<endl;

    }
    plik.close();
}
