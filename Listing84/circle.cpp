 // CIRCLE.CPP
 #include "circle.h"

 Circle::Circle(float r, float a, float b)
 : Point(a, b) // llama al constructor de la clase base
 { radius = r; }

 void Circle::setRadius(float r) { radius = r; }

 float Circle::getRadius() const { return radius; }

 float Circle::area() const
 { return 3.14159 * radius * radius; }

 // salida en el formato:
 // Center = [x, y]; Radius = #.##
 ostream &operator<<(ostream &output, const Circle &c){
 output << "Center = [" << c.x << ", " << c.y
 << "]; Radius = " << setprecision(2) << c.radius;

 return output;
 }