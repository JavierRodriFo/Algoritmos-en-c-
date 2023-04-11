/*7.Una temperatura en grados Celsius (C) se puede convertir a su equivalente Fahrenheit (F) con la fórmula:F =9/5*c+32 De Fahrenheit a Celsius con la fórmula:c=f-32*5/9.Elaborar un algoritmo que lea una temperatura en grados Celsius y obtenga e
imprima la temperatura Fahrenheit equivalente.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int grados_celsius, Fahrenheit;
	cout<<"digite la temperatura en grados celsius :";cin>>grados_celsius;
	Fahrenheit=(9/5*grados_celsius)+32;
	cout<<"la temperatura celsius equivale en Fahrenheit a : " <<Fahrenheit<<endl;
	return 0;
}


