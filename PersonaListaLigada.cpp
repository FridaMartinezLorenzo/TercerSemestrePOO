#include <iostream>

using namespace std;

class Persona{
	protected:
        string name;
        char sex;
    	int age;
	public: 
    Persona (){
        sex = 'X';
        age = -1;
    }

    void setName ( string  n){
        name = n;
    }

    string getName (){
        return name;
    }

    void setSex (char s){
        sex = s;
    }

    char getSex (){
        return sex;
    }

    void setAge (int a){
        age = a;
    }

    int getAge (){
        return age;
    }
    
    void show (){
	cout <<"Nombre: "<<getName()<<endl;
    cout <<"Sexo: "<<getSex()<<endl;
	cout <<"Edad: "<<getAge()<<endl;
	}
};

//___________________________________________________________________________________
class Estudiante: public Persona
{
	int prom;
	public:
		void setProm(int);
		int getProm();
		void show();
};


void Estudiante:: setProm (int p){
    prom = p;
}

int  Estudiante :: getProm (){
    return prom;
}

void Estudiante :: show (){
	cout <<"Nombre: "<<getName()<<endl;
    cout <<"Sexo: "<<getSex()<<endl;
	cout <<"Edad: "<<getAge()<<endl;
	cout <<"Promedio: "<<getProm()<<endl;
}
//___________________________________________________________________________________________
class Profesor: public Persona
{
	string inst;
	public:
		void setInst( string);
		string getInst();
		void show();
};

void Profesor:: setInst ( string m){
    inst = m;
}

string Profesor :: getInst(){
    return inst;
}

void Profesor :: show (){
	cout <<"Nombre: "<<getName()<<endl;
    cout <<"Sexo: "<<getSex()<<endl;
	cout <<"Edad: "<<getAge()<<endl;
	cout <<"Instituto al que pertenece: "<<getInst()<<endl;
}

//__________________________________________________________________________________________
class Administrativo: public Persona
{
	string job;
	public:
		void setJob( string );
		string getJob();
		void show();
};

void Administrativo:: setJob ( string m){
    job = m;
}

string Administrativo :: getJob(){
    return job;
}

void Administrativo :: show (){
	cout <<"Nombre: "<<getName()<<endl;
    cout <<"Sexo: "<<getSex()<<endl;
	cout <<"Edad: "<<getAge()<<endl;
	cout <<"Cargo Admin: "<<getJob()<<endl;
}
 
//___________________________________________________________________
//Clases para la lista enlazada
//___________________________________________________________________

class Nodo{
	public:
        void setPersona(Persona );
		Persona getPersona();
        void setSig(Nodo *);
        Nodo * getSig();
	protected :
		Persona individuo;
		class Nodo * sig;
		
};
void Nodo::setPersona(Persona dato ){
	individuo = dato; 
}

Persona  Nodo::getPersona(){
	return individuo;
}	

void Nodo::setSig(Nodo * s){
	sig =	s;
}

Nodo * Nodo::getSig(){
	return sig;
}

//_______________________________________________________________

class Lista{
	protected:
		Nodo * head;
	public:
	Lista(){
		head = NULL;
	}
	Nodo * getHead ();
	void setHead(Nodo *);
	Nodo * crearNodo (Persona);
	void insertHead(Persona);
	void insertEnd(Persona);
	void recorrerLista();
	void deleteHead();
	void deleteEnd();
};

Nodo * Lista::getHead(){
	return head;
}

void Lista::setHead(Nodo * n){
	head = n;
} 

Nodo * Lista::crearNodo (Persona dato ){
	Nodo * n = new Nodo;
	n->setPersona(dato);
	n->setSig (NULL);
	return n;
}

void Lista::insertHead(Persona dato){
	Nodo * n = crearNodo (dato),
		*aux = getHead();
	if (aux != NULL){
		n->setSig (head);
	}
	setHead(n);	 	
}

void  Lista::insertEnd (Persona dato){
	Nodo * n = crearNodo(dato),
	     * boat = getHead();
	if (boat == NULL){
		setHead(n);
	}else{
		Nodo * ant = NULL;
		while (boat != NULL){
			ant = boat;
			boat = boat->getSig();
		}
		ant->setSig(n);
	}
}

void Lista::recorrerLista (){
	Nodo * boat = getHead();
	int counter = 0;
	cout<<"Contenido de la lista\n\n\n";
	while (boat != NULL){
			cout<<"DATO: "<<++counter<<endl;
			Persona aux = boat->getPersona();
			aux.Persona::show();
			boat = boat->getSig();
		}
		cout<<"\nNULL";
}

void Lista::deleteHead(){
	Nodo *post = getHead(),
		 *boat = post;
	if (boat != NULL){
		post = post->getSig();
		boat->setSig(NULL);
		setHead(post);	
	}else
		setHead(NULL);
}

void  Lista::deleteEnd (){
	Nodo * boat = getHead();
	if (boat == NULL){
		setHead(NULL);
	}else{
		Nodo * last = NULL, *ant =NULL;
		while (boat != NULL){
			ant = boat;
			boat = boat->getSig();
			last = boat;
			boat = boat->getSig();
		}
		ant->setSig(NULL);
		
	}
}
//_________________________________________________________________________________________
int main (){
    Persona i1;
    Estudiante s1;
    Profesor p1;
    Administrativo a1;
	
    //Rellenamos para Persona
    i1.setName("Adrik");
    i1.setSex('M');
    i1.setAge(19);
    //i1.show();	
	
    //Rellenamos para estudiante
    s1.setName("Fri");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    s1.setSex('F');
    s1.setAge(19);
    s1.setProm(9);
    //s1.show();

    //Rellenamos para profesor
    p1.setName("Mason");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    p1.setSex('M');
    p1.setAge(21);
    p1.setInst("Psiquiatria");
    //p1.show();

    //Rellenamos para Administrativo
    a1.setName("Jenna");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    a1.setSex('F');
    a1.setAge(34);
    a1.setJob("Depto. de Becas");
    //a1.show();

// Utilización de la lista 
	Lista list;
	list.insertHead(i1);
	list.insertHead(s1);
	list.insertEnd(a1);
	list.insertHead(p1);
	list.recorrerLista();//Todos los datos ingresados ORIGINAL
	list.deleteEnd();
	list.recorrerLista();//Después de la eliminacion del final de la lista
	list.deleteHead();
	list.recorrerLista();//Después de la eliminacion de la cabeza de la lista
    
   return 0;
}

