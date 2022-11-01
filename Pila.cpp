//			Frida Ximena Martinez Lorenzo

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct tipoPila{
	int tope;
	int tam;
	int *p;
} Pila;


//PROTOTIPADOS

void crearPila ( Pila * pilaT, int tam ); //IniPila
void finPila ( Pila *); 
bool estaVacia ( Pila * );
bool estaLlena ( Pila *);
bool push ( Pila *, int);
int  pop (Pila *);

int main ()
{
	Pila pila;
	int tam, num, opc; 
	cout << "¿Cuántos elementos desea ingresar? " ;
	cin >> tam;
	crearPila ( &pila, tam);
	//MENU
	do{
		do{
			int opc;
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
				case 1: crearPila ( &pila, tam);
						break;
				
				case 2: finPila ( &pila );
						break;
				
				case 3: system ( "cls" );
						if ( estaLlena ( &pila ))
							cout << "\n La pila esta llena\n ";						
							else{
							cout << "Ingrese el numero a insertar ";
							cin >> num;
							if ( push ( &pila, num ) )
								cout << "\n SE HA INSERTADO " << pila.p[pila.tope] << " CON EXITO \n";
							else
								cout << "\nError al insertar \n";
				}
				system( "pause" );
				break;
		
				case 4: num = 0;
					if ( estaVacia ( &pila ) )
						cout << "\n No hay nada que eliminar, esta vacia \n";
					else
					{
						num = pop ( &pila );
						cout <<"\n El numero eliminado es " << num << endl;
					}
					system ( "pause" );
					break;
				
				case 5: if ( estaVacia ( &pila ) )
							cout << "\nLa pila esta vacia \n ";
						else
							cout << "\n La pila NO esta vacia \n";
				system( "pause" );	
				break;
		
			case 6: if ( estaLlena ( &pila ) )
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
////////////////////////////////////////////////////////////////////////////////////////////////////////
void crearPila (Pila * pilaT,int tam)
{
	pilaT->tope = -1;
	pilaT->tam = tam;
	pilaT->p = new int[tam];
	if (pilaT->p == NULL)
	{
			cout << "No hay memoria";
			exit (1);
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
void finPila(Pila * pila)
{
		if (pila->p != NULL)
		{
			delete(pila->p);
			pila->tam = 0;
			pila->tope = -1;
		}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
bool push (Pila * pila, int num)
{

	if (pila->tope >= -1 && pila->tope < pila->tam)
	{
		pila->tope ++;
		pila->p [ pila->tope ] = num;
		return true;
	}
	return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

int pop (Pila * pila)
{	
	int dato;
	dato = pila->p[pila->tope];
	pila->tope--;
	return dato;
}
////////////////////////////////////////////////////////////////////////////////////////////////////

bool estaVacia (Pila * pila)
{
	if (pila->tope == -1)
		return true;
	return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////

bool estaLlena(Pila * pila)
{
	if (pila->tope == pila->tam-1 )
		return true;
	return false;
}

