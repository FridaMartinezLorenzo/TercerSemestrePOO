 // CIRCLE.H
 // clase Circle
 #ifndef CIRCLE_H
 #define CIRCLE_H

 #include <iostream>
 #include <iomanip>
 #include "point.h"

 class Circle : public Point { // Circle hereda de Point
 friend ostream &operator<<(ostream &, const Circle &);
 public:
 Circle(float r = 0.0, float x = 0, float y = 0);

 void setRadius(float);
 float getRadius() const;
 float area() const;
 protected:
 float radius;
 };
 #endif /*CIRCLE_H_*/