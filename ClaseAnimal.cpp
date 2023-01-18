#include <iostream> 

using namespace std;

class Animal{
       public:
       virtual void hablar()=0;
};

class Perro : public Animal{
       public: 
              virtual void hablar(){
                     cout<<"Guau guau";
              }
};

class Gato : public Animal{
       public: 
              virtual void hablar(){
                     cout<<"Miau Miau";
              }
};

int main(){
       Animal A[] ={ new Perro(), new Gato (), new Perro()};
       for (int i = 0; i <3; i++)
              A[i].hablar();
}
