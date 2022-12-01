//Ejemplo de herencia

class Vehiculo{
    private int ruedas;
    private int pasajeros;
    
    public void setRuedas (int num){
        ruedas = num;
    }
    
    public int getRuedas(){
        return ruedas;
    }
    
    public void setPasajeros (int num){
        pasajeros = num;
    }
    
    public int getPasajeros(){
        return pasajeros;
    }
}


//Clase camión con herencia de Vehículo
public class Camion extends Vehiculo{
    private int carga;
    
    public void setCarga(int num){
        carga = num;
    }
    
    public int getCarga (){
        return carga;
    }
    
    public void muestra(){
        // uso de métodos heredados
        System.out.println("Ruedas: " + getRuedas());
        System.out.println("Pasajeros: " + getPasajeros());
        // metodo de la clase Camion
         System.out.println("Capacidad de carga: " + getCarga());
    }
    public static void main (String argvs[]){
        Camion ford = new Camion();
        ford.setRuedas(6);
        ford.setPasajeros(3);
        ford. setCarga(32000);
        ford.muestra();
        
    }
}
