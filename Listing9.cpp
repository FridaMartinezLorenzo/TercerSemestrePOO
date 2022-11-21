#include <iostream>

using namespace std;

typedef struct {
	int n1,n2,n3;
}cPrueba;


int main(){
	cPrueba *pr1,*pr2;
	
	pr1=new cPrueba;
	pr1->n1=11;
	pr1->n2=12;
	pr1->n3=13;
	
	
	pr2= new cPrueba (*pr1); //Asignación de valores a la vez que se inicializa y asigna memoria
	delete pr1;
	
	
	cout <<pr2->n1 <<" "<<pr2->n2 <<" "<<pr2->n3<<endl;
	
	delete pr2;
	return 0;
}