#include <iostream>

using namespace std;

template <class T>
void desplegaArr (T arr[], const int cont, T pr){
	for (int i = 0;i<cont;i++)
			cout<<arr[i]<<" ";
	cout<<endl;
	cout<<pr<<endl;	
}


int main (){
	const int contEnt = 4, contFlot =5, contCar = 10;
	int Ent[] ={1,2,3,4};
	float flot []={1.1,2.2,3.3,4.4,5.5};
	char car[]={"Plantilla"};
	cout<<"Arreglo de flotantes: \n";
	desplegaArr (flot,contFlot,(float)3.33);
	
	cout<<"Arreglo de caracteres: \n";
	desplegaArr(car, contCar, 'Z');
	
	cout<< "Arreglo de enteros: \n";
	desplegaArr (Ent, contEnt,99);
	
	return 0;
}


