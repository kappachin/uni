#include <iostream>
#include <time.h> //time
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

	 srand (time(NULL));
	//int one,two,three,four,five,six;
	bool czyBylo = false;
	int losowanie[6];
	int randTemp;
	//losowanie[0] = randTemp = (rand() % 49) + 1; // first array position initializing
	int a = 0;
	do{
	randTemp = (rand() % 49) + 1;   //min + rand() % (( max + 1 ) - min);
	czyBylo = false;
	for(int k = 0;k<a;k++){

        if(randTemp == losowanie[k]){
            czyBylo = true;
        }
        if(!czyBylo){
            losowanie[a] = 1;
            a++;
        }
	}




	} while(a<6);






	for(int x = 0;x<6;x++){
	//	losowanie[x] = (rand() % 49) + 1;    //print array
		cout<<x<<"."<<losowanie[x]<<endl;
	}

	return 0;
}
