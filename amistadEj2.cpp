#include <iostream>

using namespace std;

class Linea;

class Recuadro{
	friend int mismoColor (Linea, Recuadro);
	
	private:
		int color;
		int xsup,ysup;//Esquina superior izq
		int xinf,yinf;//Esquina superior derecha
		
		public:
			void ponColor(int);
			void definirRecuadro(int,int,int,int);
			void print ()const{
				cout<<color<<endl;
			}
};

class Linea{
	friend int mismoColor(Linea,Recuadro);
	
	private:
		int color;
		int xInicial,yInicial;
		int lon;
		
		public:
			void ponColor(int);
			void definirLinea(int,int,int);
			void print ()const{
				cout<<color<<endl;
			}
};


int mismoColor (Linea l, Recuadro r){
	if (l.color == r.color)
			return 1;
	return 0;
}

void Recuadro :: ponColor (int c){
	color = c;
}

void Recuadro::definirRecuadro (int x1, int y1, int x2, int y2){
	xsup = x1;
	ysup = y1;
	xinf= x2;
	yinf=y2;
}

void Linea::ponColor (int c){
	color = c;
}

void Linea ::definirLinea (int x, int y, int l){
	xInicial = x;
	yInicial = y;
	lon = l;
}

int main ()
{
	Recuadro r;
	Linea l;
	
	r.definirRecuadro(10,10,15,15);
	r.ponColor(3);
	l.definirLinea (2,2,10);
	l.ponColor(4);
	if (!mismoColor (l,r))
		cout <<"No tienen el mismo color"<<endl;
	cout<<"Color de f1: ";
	r.print();
	cout<<"Color de f2: ";
	l.print();
	cout<<endl;
	l.ponColor(3);
	if (mismoColor(l,r))
		cout<<"Tienen el mismo color"<<endl;
	cout<<"Color de f1: ";
	r.print();
	cout<<"Color de f2: ";
	l.print();
	cout<<endl;
	return 0;
}
