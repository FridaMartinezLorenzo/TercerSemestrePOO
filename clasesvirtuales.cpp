//Funciones virtuales

#include <iostream>

using namespace std;

class base{
	public:
		virtual void quien(){
			cout<<"Base\n";
		}
};

class primera: public base{
	public:
		void quien(){
			cout<<"primera\n";
		}
};

class segunda: public base{
	public: 
		void quien(){
			cout<<"Segunda \n";
		}
};

class tercera: public base{
	
};

class cuarta: public base{
	public:
		//No se valen con un tipo de dato diferente
		/* int quien(){
			cout<<"cuarta\n";
		}*/
};


int main(){
	base objBase, *pBase;
	primera obj1;
	segunda obj2;
	tercera obj3;
	cuarta obj4;
	
	pBase = &objBase;
	pBase->quien();
	
	pBase = &obj1;
	pBase->quien();
	
	pBase = &obj2;
	pBase->quien();
	
	pBase = &obj3;
	pBase->quien();
	
	pBase = &obj4;
	pBase->quien();
	
	return 0;
	
}

