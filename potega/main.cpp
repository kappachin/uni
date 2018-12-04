#include <iostream>
#include <math.h>    // bliblioteka zawierajaca fukcje potegowania
using namespace std;

int main() {

	static int podstawa = 2;

	int wyniki[10];


	for (int i = 0; i<10;i++){

		wyniki[i] = pow(podstawa,i); // pow(int,int) - funkcja potengowania


		cout<<wyniki[i]<<endl;

	}




	return 0;
}
