/*Variables de referencia
		Debe ser inicializada en el momento de su declaración

int max = 1000, &sMax=max;
sMax++;
*/

#include <iostream>

using namespace std;

int main (){
	int x = 2, &y = x, z = 8;
	
	cout <<"x = "<<x<<endl
		 <<"y = "<<y<<endl;
		 
	y = 10;
	cout <<"x = "<<x<<endl
		 <<"y = "<<y<<endl;
		 
	//Reasignar no esta permitido
		// & y = &z;
		//	cout <<"x = "<<x<<endl
		//		 <<"y = "<<y<<endl;
		
	 y++;
	 cout<<"z ="<<z<<endl
	 	 <<"y ="<<y<<endl;
	
	return 0;
}