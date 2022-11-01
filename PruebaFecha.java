class Fecha{
    private int dia;
    private int mes, an;

    public void inicializar (){
        dia = mes = an =-1;
    }

    public boolean setDia(int day){
        switch(mes){
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

        default: return false;
        }
        dia=day;
        return true;
    }

    public int getDia(){
        if (dia == -1)
            //System.out.println ("No se ha establecido el día");
            return -1;
        return dia;   
    }
    public boolean setMes (int month){
        if (month < 1 || month > 12)
            return false;
        mes = month;
        return true;
    }
    public int getMes(){
        if (mes == -1)
            return -1;
        return mes;
    }

    public boolean setAn (int year){
        if (year < 1900 || year > 2100)
            return false;
        an = year;
        return true;
    }

    public int getAn(){
        if ( an == -1)
            return -1;
        return an;
    }
    public boolean bisiesto(){
        if (an % 4 == 0)
            return true;
        return false;
    }

    public boolean nextDay(){
        int aux = dia+1, aux2 = dia;
        if (!setDia(aux)){
            dia=1;
            aux=mes+1;
            if (!setMes(aux)){
                mes=1;
                aux=an+1;
                if (!setAn(aux))
                    System.out.println("Se ha llegado al límite del calendario");
                an=an +1;
            }
        }else
            dia=dia+1;
        if (dia != aux2){
            return true;
        }
        return false;
    }
}

public class PruebaFecha{
    public static void main (String[] args){
        Fecha a = new Fecha();
        Fecha b = new Fecha();

        a.inicializar();
        b.inicializar();
        if (!a.setAn(2022))
            System.out.println ("Año invalido");
        if (!a.setMes(13))
            System.out.println ("Mes invalido");
        if (!a.setMes(2))
            System.out.println ("Mes invalido");
        if (!a.setDia(29))
            System.out.println ("Dia invalido");
        if (!a.setDia(28))
            System.out.println ("Dia invalido");

        System.out.println("Dia: "+a.getDia());
        System.out.println("Mes: "+a.getMes());
        System.out.println("An: "+a.getAn());

        if (!a.nextDay())
            System.out.println("Error en el proceso de día siguiente\n");
        else{
            System.out.println("Dia: "+a.getDia());
            System.out.println("Mes: "+a.getMes());
            System.out.println("An: "+a.getAn());
        }
    }
}