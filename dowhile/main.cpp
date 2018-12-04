#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int b;
    cout<<"podaj liczbe:"<<endl;
    cin>>b;
    system("CLS");
     int z;
    cout<<"zgadnij liczbe:"<<endl;
    cin>>z;

while(b != z){


if (z<b){
    cout<<"za malo"<<endl;


} else{cout<<"za duzo"<<endl;
break;
}
}


    cout<<"brawo";
    return 0;
}

