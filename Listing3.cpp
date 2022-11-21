#include <iostream>

using namespace std;

int punto (int = 5, int = 4);

int main (){
	cout <<"Valor 1: "<<punto()<<"\n";
	cout <<"Valor 2: "<<punto(1)<<"\n";
	cout <<"Valor 3: "<<punto(1,3)<<"\n";
	cout <<"Valor 4: "<<punto(8,2)<<"\n";
	return 0;
}


int punto (int x,int y){
	if (y != 4)
		return y;
	if (x != 5)
		return x;
	return x+y;
}
