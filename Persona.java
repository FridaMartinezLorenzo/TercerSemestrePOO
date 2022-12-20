class Nombre {
    protected String nombre;
    protected String apellidoP;
    protected String apellidoM;
}

class Persona{
        protected Nombre name;
        protected char sex;
    	protected int age;
    public void Persona (){
        sex = 'X';
        age = -1;
    }

    public void setName ( string  n, string a1, string a2){
        name.setNombre(n);
        name.setApellido1(ape1);
        name.setApellido2(ape2);
    }

    public Nombre getName (){
        return name;
    }

    public void setSex (char s){
        sex = s;
    }

    public char getSex (){
        return sex;
    }

    public void setAge (int a){
        age = a;
    }

    public int getAge (){
        return age;
    }
    
    void show (){
        System.out.println("Nombre: "+name.getName());
        System.out.println("Sexo: "+getSex());
        System.out.println("Edad: "+getAge());
	}
};

//___________________________________________________________________________________
class Estudiante extends Persona
{
	protected int prom;
		public void setProm(int){
		    prom = p;
		}
		public int getProm(){
		    return prom;
		}
		public void showE(){
		    System.out.println("Nombre: "+name.getName());
            System.out.println("Sexo: "+getSex());
            System.out.println("Edad: "+getAge());
	        System.out.println("Promedio: "+getProm());
		}
};


//___________________________________________________________________________________________
class Profesor extends Persona
{
	protected string inst;
	
		public void setInst( string){
		    inst = m;
		}
		public String getInst(){
		    return inst;
		}
		public showrProfesor(){
		    super.show();
		    System.out.println("Instituto al que pertenece: "+getInst);
}
		}
};


//__________________________________________________________________________________________
class Administrativo extends Persona
{
	protected string job;
		public void setJob( String ){
		    job = m
		}
		public String getJob(){
		    return job;
		}
		public void show(){
		    super.show();
		    System.out.println("Cargo Admin"+getJob());
		}
};

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
