/*14.Elaborar un algoritmo que lea el valor de W e imprima el valor de Z.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int w;
	cout<<"ingrese el valor de w :";cin>>w;
	double potencia1=(pow(w,2)/2);
	double exponencial=exp(potencia1);
	double ecuacion1=1/sqrt(2*3.1416);
	double z=exponencial*ecuacion1;
	cout<<"el valor de z es quivalente a :"<<z<<endl;
	return 0;
	
}

	

