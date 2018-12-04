#include <iostream>

using namespace std;

int main()
{
	char kostka[10][10];

int w;
cout<<"nr kostki:"<<endl;
cin>>w;


swich(w){

case 1
for(int col=0;col<10;col++){


        for(int row=0; row<10;row++){
        	// int space = col;

        if(row == col){
		kostka[col][row] = ' ';
		}
		else{
		kostka[col][row] = '#';
		}
        	cout<<kostka[col][row];

		}
		cout<<endl;

	}
break;
default



}
return 0;
}

