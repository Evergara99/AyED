#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	//Calcular el valor de PI usando la serie Liebniz, sin usar optimización
	//Debo iterar hasta que el valor de PI sea correcto en sus primeros 6 decimales (3.141592)
	
	int n=0;
	double termino=1.0;
	double pi=0.0;
	double precision=0.0000001;
	
	cout.precision(8);
	while(termino > precision || termino < -precision){
		
		termino = 1.0 / (2 * n+1 );
		
			if (n % 2 == 1){
				
			termino = -termino;
		}
	
	pi += termino;
	n++;
   }

    pi *= 4;

	
	cout<<"Aproximacion de PI con 6 decimales correctos: "<<pi<<"  "<<endl;


	
	
	
	
	return 0;
}
