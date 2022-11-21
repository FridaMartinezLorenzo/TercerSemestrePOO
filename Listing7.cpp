#include <iostream>

using namespace std;

int main (){
	int *p, *q;
	
	p = new int;
	
	if (!p){
		cout <<"No se puedo asignar memoria";
		return 0;
	}
	
	*p = 100;
	cout<<endl<<*p<<endl;
	
	q = new int (123);
	cout<<endl<<*q<<endl;
	
	delate p;
	
	delate q;
	return 0;
}