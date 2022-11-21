import java.util.Scanner;
class PruebaPalindromo {
   public static void main(String args[])
   {
      String reverseString="";
      Scanner scanner = new Scanner(System.in);

      System.out.println("Ingresa una palabra para verificar si es palindroma: ");
      String inputString = scanner.nextLine();

      int length = inputString.length();

      for ( int i = length - 1 ; i >= 0 ; i-- )
         reverseString = reverseString + inputString.charAt(i);

      if (inputString.equals(reverseString))
         System.out.println("La palabra ingresada es palindroma.");
      else
         System.out.println("La palabra ingresada no es palindroma.");

   }
}