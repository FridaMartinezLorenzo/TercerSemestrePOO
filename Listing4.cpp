#include <iostream>

using namespace std;

int b = 1;
int f (int);
int h (int x = f(b));//Argumento default

int main (){
	b = 5;
	cout <<b<<endl;
	{
		int b = 3;
		cout<<b<<endl;
		cout<<h()<<endl; //h (f(::b)) La variable fuera del corchete
		cout<<h(b)<<endl; //La variable local (dentro del corchete)
	}
	return 0;
}

int h (int z){
	cout <<"Valor recibido: "<<z<<endl;
	return z*z;
}

int f (int y){
	return y;
}