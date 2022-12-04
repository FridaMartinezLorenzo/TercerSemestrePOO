#include <iostream>

using namespace std;

class Persona{
    char *name,
           sex;
    int age;

public: 
    Persona (){
        name = (char *) malloc (sizeof (char));
        if (name == NULL)
            cout<<"No hay memoria";
        name =NULL;
        sex = 'X';
        age = -1;
    }

    void setName (char * n){
        name = n;
    }

    char * getName (){
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
};


class Estudiante: public Persona
{
	int prom;
	public:
        void IniM (); 
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
	char *inst;
	public:
        void IniM (); 
		void setInst(char *);
		char * getInst();
		void show();
};

void Profesor :: IniM (){
    inst = (char *) malloc (sizeof (char));
    if (inst  == NULL)
        cout <<"No hay memoria";
    *inst = NULL;
}

void Profesor:: setInst (char *m){
    inst = m;
}

char * Profesor :: getInst(){
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
	char *job;
	public:
        void IniM (); 
		void setJob(char *);
		char * getJob();
		void show();
};

void Administrativo :: IniM (){
    job = (char *) malloc (sizeof (char));
    if (job  == NULL)
        cout <<"No hay memoria";
    *job = NULL;
}
void Administrativo:: setJob (char *m){
    job = m;
}

char * Administrativo :: getJob(){
    return job;
}

void Administrativo :: show (){
	cout <<"Nombre: "<<getName()<<endl;
    cout <<"Sexo: "<<getSex()<<endl;
	cout <<"Edad: "<<getAge()<<endl;
	cout <<"Cargo Admin: "<<getJob()<<endl;
}

int main (){
    Estudiante s1;
    Profesor p1;
    Administrativo a1;
    //Rellenamos para estudiante
    s1.setName("Fri");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    s1.setSex('F');
    s1.setAge(19);
    s1.setProm(9);
	s1.show();

    //Rellenamos para profesor
    p1.setName("Mason");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    p1.setSex('M');
    p1.setAge(21);
    p1.setInst("Psiquiatria");
	p1.show();

    //Rellenamos para Administrativo
    a1.setName("Jenna");//Se puede acceder a los métodos del padre pero no alterar los datos en caso de ser privados
    a1.setSex('F');
    a1.setAge(34);
    a1.setJob("Depto. de Becas");
	a1.show();

    return 0;
}