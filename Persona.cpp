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
        //void IniM (); 
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
    //    void IniM (); 
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
    i1.show();
	
    //Rellenamos para estudiante
    s1.setName("Fri");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    s1.setSex('F');
    s1.setAge(19);
    s1.setProm(9);
    s1.show();
    s1.Persona::show();//Se prueba que se ejecuta el método del padre en la subclase especializada	

    //Rellenamos para profesor
    p1.setName("Mason");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    p1.setSex('M');
    p1.setAge(21);
    p1.setInst("Psiquiatria");
    p1.show();
    p1.Persona::show();//Se prueba que se ejecuta el método del padre en la subclase especializada	

    //Rellenamos para Administrativo
    a1.setName("Jenna");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    a1.setSex('F');
    a1.setAge(34);
    a1.setJob("Depto. de Becas");
    a1.show();
    a1.Persona::show();//Se prueba que se ejecuta el método del padre en la subclase especializada	

    return 0;
}
