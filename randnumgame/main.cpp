#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    int a,b,c,w;
    srand(time(NULL));
    cout<<"dolny zakres: ";
    cin>>a;
    cout<<endl;
    cout<<"gorny zakres: ";
    cin>>b;
    cout<<endl;
    cout<<"ilczba losowan: ";
    cin>>c;
    cout<<endl;

    if(b == a){
        w = b + 1 ;
    } else {
    w = ((b-a) + 2);
    }
   int zakres[c];
    for(int i = 0; i<c;i++){

     zakres[i] = rand() % w ;

    cout << zakres[i] << endl;
    }
float srednia;
for(int x =0; x<c;x++){
 srednia +=zakres[x];
 srednia= srednia/c;
}
cout<<srednia;
    return 0;
}
