#Ejemplo de polimorfismo en Python

class base:
       def quien (self):
              print ('Base')

class primera (base):
       def quien (self):
              print ('Primera')
              
class segunda (base):
       def quien (self):
              print ('Segunda')

class segunda (base):
       def quien (self):
              print ('Segunda')
              
class tercera (base):
       def foo (self):
              return
              
#script
objBase = base()
obj1 = primera()
obj2 = segunda ()
obj3 = tercera()

pBase = objBase
pBase.quien()
pBase = obj1
pBase.quien()
pBase = obj2
pBase.quien()
pBase = obj3
pBase.quien()