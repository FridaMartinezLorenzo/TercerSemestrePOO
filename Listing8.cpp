#include <iostream>

 using namespace std;

 int main() {
 	float *ap, *p=new float (3) ;
 	const int MAX=5;
 	int i;
 	ap= new float [MAX]; //asigna memoria int i;
 	for( i=0; i<MAX; i++)
 		ap[i]=i * *p;
 	for(i=0; i<MAX; i++)
 		cout<<ap[i]<<endl;
 	delete p;
 	delete [] ap;
	return 0;
}