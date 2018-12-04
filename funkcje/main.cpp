#include <iostream>


using namespace std;

int dodaj(int a, int b);
int suma(int);


int odejmij(int a, int b);

void rys(int a, int b,char znak);

int main()
{
cout<<""<<endl;
 rys(5,6,'@');

    return 0;
}




/*
int dodaj(int a ,int b){
return a + b;
}

int odejmij(int a, int b){
return a - b;
}

*/






void rys(int a, int b,char znak){
for(int x = 0;x<a;x++){
    for(int z = 0;z<b;z++){
        cout<<znak;
    }
    cout<<endl;
}
return;

}
int suma(int suma) {
	if (num == 0) {
		return 0;
	}
	return num + suma(num - 1);
}