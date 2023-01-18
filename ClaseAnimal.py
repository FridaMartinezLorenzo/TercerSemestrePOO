from abc import ABC, abstractmethod
class Animal(ABC):
       @abstractmethod
       def hablar(self):
              pass
       
class Perro (Animal):
       def hablar(self):
              print("Guau")

class Gato (Animal):
       def hablar(self):
              print("Miau")
              
#Script

a = [Perro(), Gato(), Perro()]

for s in a:
       s.hablar() #La s toma los valores de cada una de las posiciones por eso es s