/*19.Elaborar un algoritmo que permita leer el tama�o de un �ngulo en grados e imprima el seno y coseno. Debe convertirse los grados le�dos a radianes antes de hacer los c�lculos.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int grados;
	cout<<"ingrese el tama�o de angulo en grados :";cin>>grados;
	double radianes=grados*(3.1416/180);
	double seno=sin(radianes);
	double coseno=cos(radianes);
	cout<<"el seno de "<<grados<< " es equivalente a :"<<seno<<endl;
	cout<<"el coseno de "<<grados<< " es equivalente a :"<<coseno<<endl;
	return 0;
	
}
