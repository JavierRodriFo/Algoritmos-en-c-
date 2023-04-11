/*18. Elaborar un algoritmo similar al anterior, sólo que el dato que se lee estará dado en grados. Debe convertirse los grados leídos a radianes antes de hacer los cálculos.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int grados;
	cout<<"ingrese el tamaño del angulo en grados:";cin>>grados;
	double radianes=grados*(3.1416/180);
	double seno=sin(radianes);
	double coseno=cos(radianes);
	double cotangente=seno/coseno;
	double secante=1/coseno;
	double cosecante=1/seno;
	double tangente =seno/coseno;
	cout<<"el tamaño de angulo en grados equivale a :"<<radianes<<" en radianes"<<endl;
	cout<<"la tangente de "<<grados<<" es igual a :" <<tangente<<endl;
	cout<<"la cotangente de"<<grados<<" es igual a :" <<cotangente<<endl;
	cout<<"la secante de"<<grados<<" es igual a :" <<secante<<endl;
	cout<<"la cosecante de"<<grados<<" es igual a :" <<cosecante<<endl;
	return 0;
}

