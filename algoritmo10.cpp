/*10.Elaborar un algoritmo que lea el radio de un c�rculo e imprima el �rea. �REA = ?r�.*/
#include<iostream>
using namespace std;
int main(){
	int radio,potencia,area;
	cout<<"ingrese el radio del circulo :"; cin>>radio;
	potencia=radio*radio;
	area=3.1416*potencia;
	cout<<"el area del circulo es :" <<area<<endl;
	return 0;
}
