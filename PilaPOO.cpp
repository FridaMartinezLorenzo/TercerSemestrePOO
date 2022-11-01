#include <iostream>

using namespace std;

class Pila {
    private: 
    int tope, 
        tam, 
        *p;
    public:
    void crearPila (int size); //IniPila
    void finPila (); 
    bool estaVacia ();
    bool estaLlena ();
    bool push (int dato);
    int  pop ();
};


int main ()
{
   Pila pila;
   int tam, num, opc; 
	cout << "¿Cuántos elementos desea ingresar? " ;
	cin >> tam;
	pila.crearPila(tam);
	//MENU
	do{
		do{
			//int opc;
			system ("cls");
			cout << "______MENU________" << endl;  
			cout << " 1) Inicializar pila" << endl;
			cout << " 2) Liberar pila" << endl;
			cout << " 3) Insertar en pila" << endl;
			cout << " 4) Sacar (Eliminar) de la pila " << endl;
			cout << " 5) Determinar si esta vacia" << endl;
			cout << " 6) Determinar si esta llena" << endl;
			cout << " 7) Salir \n OPC: " << endl;
			
			cin >> opc;
		}while (opc < 1 || opc > 7);
			
			switch (opc)
			{
				case 1: pila.crearPila (tam);
						break;
				
				case 2: pila.finPila ();
						break;
				
				case 3: system ( "cls" );
						if ( pila.estaLlena ())
							cout << "\n La pila esta llena\n ";						
							else{
							cout << "Ingrese el numero a insertar ";
							cin >> num;
							if ( pila.push ( num ) )
								cout << "\n SE HA INSERTADO " << num << " CON EXITO \n";
							else
								cout << "\nError al insertar \n";
				}
				system( "pause" );
				break;
		
				case 4: num = 0;
					if ( pila.estaVacia () )
						cout << "\n No hay nada que eliminar, esta vacia \n";
					else
					{
						num = pila.pop ();
						cout <<"\n El numero eliminado es " << num << endl;
					}
					system ( "pause" );
					break;
				
				case 5: if ( pila.estaVacia () )
							cout << "\nLa pila esta vacia \n ";
						else
							cout << "\n La pila NO esta vacia \n";
				system( "pause" );	
				break;
		
			case 6: if ( pila.estaLlena () )
					cout << "\n La pila esta llena \n ";
				else
				 	cout << "\n La pila no esta llena \n";
				system( "pause" );
				
				break;
		
			default: exit(1);
		}
 	}while (1);
 
 return 0;
}


void Pila::crearPila(int size){
	if (size > 0)
	{
		tope = -1;
		tam = size;
			p = new int[tam];
		if (p == NULL)
		{
			cout << "No hay memoria";
			exit (1);
		}
	}
}

void Pila::finPila(){
		if (p != NULL)
		{
			delete []p;
			p=NULL;
			tam = 0;
			tope= -1;
		}
}

bool Pila::push(int dato)
{
	if (!estaLlena())
	{
		if (tope >= -1 && tope < tam ) 
		{
			tope++;
			p[tope] = dato;
			return true;
		}
	}
	return false;
}

int Pila::pop(){	
	if (!estaVacia()){
		int dato = p[tope];
		tope--;
		return dato;
	}else 
		return -999;
}

bool Pila::estaVacia(){
	if (tope == -1)
		return true;
	return false;
}

bool Pila::estaLlena()
{
	if (tope == tam-1 )
		return true;
	return false;
}

