#include <iostream>

using namespace std;

void Wyswietl(float a, float b, float c, float d);
float Zmiana(float a, float b, float c, float d);

int main()
{
 float a,b,c,d;
 cout<<"Podaj cztery liczby..."<<endl;
 cin>>a;
 cin>>b;
 cin>>c;
 cin>>d;
 cout<<endl<<"Podane liczby to: "<<endl;
 Wyswietl(a,b,c,d);
 Zmiana(a,b,c,d);
 cout<<endl<<"Liczby po zmianie: "<<endl;
 Wyswietl(a,b,c,d);

    return 0;
}
void Wyswietl(float a, float b, float c, float d){
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
return;
}
float Zmiana(float a, float b, float c, float d){
a = (a*a);
b = (b*b);
c = (c*c);
d = (d*d);
return 0;
}
