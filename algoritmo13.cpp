/*13.Elaborar un algoritmo que lea el radio(r) de una esfera, calcule e imprima el volumen y el área.*/
#include<iostream>
using namespace std;
int main(){
	int radio,volumen1,volumen2, area, potencia;
	cout<<"ingrese el numero de radio de la esfera :";cin>>radio;
	potencia=radio*radio;
	area=3.1416*potencia;
	volumen1=4*3.1416*(radio*radio*radio);
	volumen2=volumen1/3;
	cout<<"el area del esfera es :" <<area<<endl;
	cout<<"el volumen de la esfera es :"<<volumen2<<endl;
	return 0;
}
