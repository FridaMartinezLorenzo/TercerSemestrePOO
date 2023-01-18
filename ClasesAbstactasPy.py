#polimorfismo y clase abstracta en Python
from abc import ABC, abstractmethod

class Shape(ABC):
 def area(self):
       return 0
 def volume(self):
       return 0

 @abstractmethod
 def getName(self):
       pass

class Point (Shape):
 def __init__(self, a, b):
       self.x = a
       self.y = b

 def setPoint(self, a, b):
       self.x = a
       self.y = b
       
 def getX(self):
       return self.x

 def getY(self):
       return self.y

 def toString(self):
       return "[" + str(self.x) + ", " + str(self.y) + "]"

 def getName(self):
       return 'Punto'

class Circle (Point):
 def __init__(self, r, a, b):
       super().__init__(a, b)
       self.radius = r

 def setRadius(self, r):
       if r>=0 :
              self.radius = r
       else:
              self.radius = 0

 def area(self):
       return 3.14159 * self.radius * self.radius

 def toString(self):
       return "Centro = " + super().toString() + "; Radio = " + str(self.radius)

 def getName(self):
       return 'C ́ırculo'

class Cylinder (Circle):
 def __init__(self, h, r, a, b):
       super().__init__(r, a, b)
       self.height = h

 def setHeight(self, h):
       if h>=0:
              self.height = h
       else:  
              self.height = 0
              
 def getHeight (self):
       return self.height

 def area (self):
       return 2 * super().area() + 2 * 3.14159 * self.radius * self.height

 def volume (self):
       return super().area() * self.height
       
 def toString (self):
       return super().toString()+"; Altura = " + str(self.height) 

 def getName(self):
       return 'Cilindro'

#script de prueba
point = Point(7, 11)
circle = Circle(3.5, 22, 8)
cylinder = Cylinder(10, 3.3, 10, 10)
arrayOfShapes = [point, circle, cylinder]

print(point.getName() + ": " + point.toString())
print(circle.getName() + ": " + circle.toString())
print(cylinder.getName() + ": " + cylinder.toString())

for sh in arrayOfShapes:
       print(sh.getName() + ": " + sh.toString())
       print( "Area = " + str(sh.area()) )
       print( "Volume = " + str(sh.volume()) )