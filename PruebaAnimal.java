abstract class Animal{
       public abstract void hablar();
}

class Perro extends Animal{
       public void hablar(){
              System.out.println("Guau guau");
       }
}

class Gato extends Animal{
       public void hablar(){
              System.out.println("Miau");
       }
}

public class PruebaAnimal{
       public static void main (String args[]){
              //Tres instancias dinamicas, un arreglo de tres objetos
              Perro dog = new Perro(), dog2 = new Perro();
              Gato cat = new Gato();
              Animal animals[] ={dog,cat,dog};
              // Animal animals[] ={new Perro(),new Gato(),new Perro()};  //Otra opcion
              for (int i = 0; i<3;i++){
                     animals[i].hablar();
              }
              
       }
}
