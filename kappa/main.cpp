#include <iostream>

using namespace std;

long int pot(int a, int b);

int main()
{

               /*  cout << " Menu wyboru: " << endl;
                 cout << "[1.] Dodawanie " << endl;
                 cout << "[2.] Odejmowanie " << endl;
                 cout << "[3.] Mnozenie " << endl;
                 cout << "[4.] Dzielenie " << endl;
            */
             cout << " Menu wyboru: " << endl;
                 cout << "[+] Dodawanie " << endl;
                 cout << "[-] Odejmowanie " << endl;
                 cout << "[*] Mnozenie " << endl;
                 cout << "[/] Dzielenie " << endl;
                 cout << "[%] Dzielenie modulo " << endl;
                 cout << "[^] potega " << endl;

    char wyb;
    cin>>wyb;
    int a,b,w;

switch(wyb){
//case 1:
case '+':

   cout<<"podaj pierwsza liczbe: ";
   cin>>a;
   cout<<"podaj druga liczbe: ";
   cin>>b;
   w = (a+b);
   cout<<a<<"+"<<b<<"="<<w;
   return 0;
    break;


//case 2:
case '-':
     cout<<"podaj pierwsza liczbe: ";
   cin>>a;
   cout<<"podaj druga liczbe: ";
   cin>>b;
   w = (a-b);
       cout<<a<<"-"<<b<<"="<<w;
    return 0;
    break;

//case 3:
case '*':
     cout<<"podaj pierwsza liczbe: ";
   cin>>a;
   cout<<"podaj druga liczbe: ";
   cin>>b;
    w = (a*b);
      cout<<a<<"*"<<b<<"="<<w;
    return 0;
    break;

//case 4:
case '/':
     cout<<"podaj pierwsza liczbe: ";
   cin>>a;
   cout<<"podaj druga liczbe: ";
   cin>>b;
   if(b == 0 ){
    cout<<"zle nie mozla dzielic przez 0";
    return 0;
   } else{
   int w = (a/b);
       cout<<a<<"/"<<b<<"="<<w;
    return 0;}
    break;

    case '%':
     cout<<"podaj pierwsza liczbe: ";
   cin>>a;
   cout<<"podaj druga liczbe: ";
   cin>>b;
   if(b == 0 ){
    cout<<"zle nie mozla dzielic przez 0";
    return 0;
   } else{
   int w = (a%b);
       cout<<a<<"%"<<b<<"="<<w;
    return 0;}
    break;

    case '^':
     cout<<"podaj podstawe: ";
   cin>>a;
   cout<<"podaj wykladnik: ";
   cin>>b;

 cout<<pot(a,b)<<endl;

    return 0;
    break;

}
return 0;
}
long int pot(int a, int b){
    long int wynik = 1;
    for (int i = 0; i<b; i++)
        wynik*=a;

    return wynik;

}
