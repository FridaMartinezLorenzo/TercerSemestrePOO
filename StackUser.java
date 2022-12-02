//interfaz
 interface IStack {
 void push(Object item);
 Object pop();
 }

 //clase implementa la interfaz
 class StackImpl implements IStack {
 protected Object[] stackArray;
 protected int tos;

 public StackImpl(int capacity) {
 stackArray = new Object[capacity];
 tos = -1;
 }

 //implementa el metodo definido en la interfaz
 public void push(Object item)
 { stackArray[++tos] = item; }

 //implementa el m ́etodo definido en la interfaz
 public Object pop() {
 Object objRef = stackArray[tos];
 stackArray[tos] = null;
 tos--;
 return objRef;
 }

 public Object peek() { return stackArray[tos];}
 }

 // extendiendo una interfaz
 interface ISafeStack extends IStack {
 boolean isEmpty();
 boolean isFull();
 }


 //esta clase hereda la implementaci ́on de la pila StackImpl
 // e implementa la nueva interfaz extendida ISafeStack
 class SafeStackImpl extends StackImpl implements ISafeStack {

 public SafeStackImpl(int capacity) { super(capacity); }

 //implementa los m ́etodos de la interfaz
 public boolean isEmpty() { return tos < 0; }
 public boolean isFull() { return tos >= stackArray.length;
 }
 }

 public class StackUser {

 public static void main(String args[]) {
 SafeStackImpl safeStackRef = new SafeStackImpl(10);
 StackImpl stackRef = safeStackRef;
 ISafeStack isafeStackRef = safeStackRef;
 IStack istackRef = safeStackRef;
 Object objRef = safeStackRef;

 safeStackRef.push("Dolar");
 stackRef.push("Peso");

 // tipo de dato simple es convertido a Integer:
 stackRef.push(1);
 System.out.println(stackRef.peek().getClass());

 System.out.println(isafeStackRef.pop());
 System.out.println(istackRef.pop());

 System.out.println(objRef.getClass());
    }
 }
