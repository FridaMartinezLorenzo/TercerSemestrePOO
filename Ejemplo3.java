public class Ejemplo3{
    public int i, j;
        public static void main (String argv[]){
            Ejemplo3 e3 = new Ejemplo3();
            Ejemplo3 e1 = new Ejemplo3();

            e1.i = 10;
            e1.j = 20;
            e3.i = 100;
            e3.j = 20;
            System.out.println(e1.i);
            System.out.println(e3.i);
    }
}