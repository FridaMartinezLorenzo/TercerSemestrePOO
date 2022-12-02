 //Prueba.cpp
 // Probando apuntadores a clase base a apuntadores a clase derivada
 #include <iostream>
 #include <iomanip>
 #include "point.h"
 #include "circle.h"

 //using namespace std;
 
 int main(){
 Point *pointPtr, p(3.5, 5.3);
 Circle *circlePtr, c(2.7, 1.2, 8.9);

 cout << "Point p: " << p << "\nCircle c: " << c << endl;

 // Maneja a un Circle como un Circle
 pointPtr = &c; // asigna la direccion de Circle a pointPtr
 circlePtr = (Circle *) pointPtr; // mascara de base a derivada
 cout << "\nArea de c (via circlePtr): "
 << circlePtr->area() << endl;
 // Es riesgoso manejar un Point como un Circle
 // getRadius() regresa basura
 pointPtr = &p; // asigna direccion de Point a pointPtr
 circlePtr = (Circle *) pointPtr; // mascara de base a derivada
 cout << "\nRadio de objeto apuntado por circlePtr: "
 << circlePtr->getRadius() << endl;

 return 0;
 }
