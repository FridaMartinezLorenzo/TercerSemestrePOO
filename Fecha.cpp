#include <iostream>

using namespace std;
//Dia mes y año 
//metodo get y set

class Fecha{
	private:
		int dia;
		int mes;
		int an;

	public:
		void Inicializar();
		bool setDia(int day);
		int getDia();
		bool setMes(int month);
		int getMes();
		bool setAn(int year);
		int getAn();	
		bool nextDay();	
		bool bisiesto();
};

void Fecha::Inicializar (){
	dia = mes = an= -1;
}

bool Fecha::setDia(int day ){
	switch (mes)
	{
		//Enero
		case 1: if (day < 1 || day > 31 )
					return false;
				break;
		//Febrero
		case 2: if (bisiesto()){
						if (day < 1 || day > 29 )
							return false;
					}else{	
						if (day < 1 || day > 28 )
						return false;
					}
				break;
		//Marzo
		case 3: if (day < 1 || day > 31 )
					return false;
				break;
		//Abril
		case 4: if (day < 1 || day > 30 )
					return false;
				break;
		//Mayo
		case 5: if (day < 1 || day > 31 )
					return false;
				break;
		//Junio
		case 6: if (day < 1 || day > 30 )
					return false;
				break;
		//Julio
		case 7: if (day < 1 || day > 31 )
					return false;
				break;
		//Agosto
		case 8: if (day < 1 || day > 31 )
					return false;
				break;
		//Septiembre
		case 9: if (day < 1 || day > 30 )
					return false;
				break;
		//Octubre
		case 10: if (day < 1 || day > 31 )
					return false;
				break;
		//Noviembre
		case 11: if (day < 1 || day > 30 )
					return false;
				break;
		//Diciembre	
		case 12: if (day < 1 || day > 31 )
					return false;
				break;
	}
	dia=day;
	return true;
}

int Fecha::getDia(){
	if (dia == -1){
		cout<<"No ha sido establecido el día";
		return -1;
	}
	return dia;
}

bool Fecha::setMes(int month){
	if (month < 1 || month >12)
		return false;
	mes = month;
	return true;
}

int Fecha::getMes(){
	if (mes == -1)
		return -1;
	return mes;
}

bool Fecha::setAn(int year){
	if ( year < 1900 || year >2100)
		return false;
	an = year;
	return true;
}

int Fecha::getAn(){
	if ( an == -1)
		return -1;
	return an;
}

bool Fecha::bisiesto (){
	if (an % 4 == 0)
		return true;
	return false;
}

bool Fecha::nextDay(){
	int aux = dia+1, aux2= dia;
	if (!setDia(aux)){
		dia=1;
		aux=mes+1;
		if (!setMes(aux)){
			mes=1;
			aux=an+1;
			if (!setAn(aux))
				cout<<"Se ha llegado al límite del calendario";
			an=an +1;
		}
	}else
		dia=dia+1;
	if (dia != aux2){
		return true;
	}
	return false;
}

int main(){
	Fecha a,b, *x=new Fecha;
	a.Inicializar();
	b.Inicializar();
	x->Inicializar();
	if (!a.setAn(2022))
		cout<<"Año invalido"<<endl;
	if (!a.setMes(13))
		cout<<"Mes inválido"<<endl;
	if (!a.setMes(2))
		cout<<"Mes inválido"<<endl;
	if (!a.setDia(29))
		cout<<"Dia inválido"<<endl;
	if (!a.setDia(28))
		cout<<"Dia inválido"<<endl;
	cout<<"Dia:"<<a.getDia();
	cout<<"Mes:"<<a.getMes();
	cout<<"An:"<<a.getAn()	<<endl;
	if (!a.nextDay())
		cout<<"Error en el proceso de día siguiente"<<endl<<endl;
	else{
			cout<<"Dia:"<<a.getDia();
			cout<<"Mes:"<<a.getMes();
			cout<<"An:"<<a.getAn();	
	}
	return 0;
}