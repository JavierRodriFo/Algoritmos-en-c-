/*18. Elaborar un algoritmo similar al anterior, s�lo que el dato que se lee estar� dado en grados. Debe convertirse los grados le�dos a radianes antes de hacer los c�lculos.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int grados;
	cout<<"ingrese el tama�o del angulo en grados:";cin>>grados;
	double radianes=grados*(3.1416/180);
	double seno=sin(radianes);
	double coseno=cos(radianes);
	double cotangente=seno/coseno;
	double secante=1/coseno;
	double cosecante=1/seno;
	double tangente =seno/coseno;
	cout<<"el tama�o de angulo en grados equivale a :"<<radianes<<" en radianes"<<endl;
	cout<<"la tangente de "<<grados<<" es igual a :" <<tangente<<endl;
	cout<<"la cotangente de"<<grados<<" es igual a :" <<cotangente<<endl;
	cout<<"la secante de"<<grados<<" es igual a :" <<secante<<endl;
	cout<<"la cosecante de"<<grados<<" es igual a :" <<cosecante<<endl;
	return 0;
}

