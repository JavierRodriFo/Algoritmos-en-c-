/*17.Elaborar un algoritmo que permita leer el tamaño de un ángulo en radianes e imprima la tangente, cotangente, secante y cosecante.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int radianes,pi=3.1416;
	cout<<"ingrese el tamaño del angulo en radianes ejemplo:(pi/8) :";cin>>radianes;
	double grados=radianes*(180/3.1416);
	double seno=sin(radianes);
	double coseno=cos(radianes);
	double cotangente=seno/coseno;
	double secante=1/coseno;
	double cosecante=1/seno;
	double tangente =seno/coseno;
	cout<<"el tamaño de angulo en radianes equivale a :"<<grados<<"en grados"<<endl;
	cout<<"la tangente de "<<radianes<<" es igual a :" <<tangente<<endl;
	cout<<"la cotangente de"<<radianes<<" es igual a :" <<cotangente<<endl;
	cout<<"la secante de"<<radianes<<" es igual a :" <<secante<<endl;
	cout<<"la cosecante de"<<radianes<<" es igual a :" <<cosecante<<endl;
	return 0;
	
}

