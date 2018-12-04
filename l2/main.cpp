#include <iostream>

using namespace std;

int main()
{

int i=0;
while(i<=20){


    cout<<"program sprawdzi czy liczby naleza do zakresu"<<endl;


    if ( (i>=3 &&i<=4)||((i>=6)&&(i<=11) ) ||((i>=15)&& (i<=17) ) ){
        cout<<"liczba:"<<i<< " tak"<<endl;

    }
    else{
        cout<<"liczba:"<<i<< "nie"<<endl;
    }


i++;
}
}
