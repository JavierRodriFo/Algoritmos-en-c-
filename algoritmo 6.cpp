/*6.Hacer un algoritmo que obtenga e imprima el valor de Y a partir de la ecuación Y = 3X² + 7X - 15 solicitando el valor de entrada de x .*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x;
	cout<<"digite el valor de x :"; cin>> x;
	float potencia=x*x;
	float ecuacion=3*potencia+7*x-15;
	cout<<"valor de y :"<<ecuacion<<endl;
	return 0;

}
