/*8. Elabore un algoritmo que lea un número de pies y calcule e imprima su equivalente en yardas, pulgadas, centímetros y metros, de acuerdo con las siguientes
equivalencias: 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2.54 cm, 1 metro = 100 cm.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int yardas,pulgadas, centimetros, metros, pies;
	cout<<"Ingrese el valor de pies :",cin>>pies;
	pulgadas=pies*12;
	yardas=pies/3;
	centimetros=pies*30.48;
	metros=pies/3.281;
	cout<<"equivalente en pulgadas :"<<pulgadas<<endl;
	cout<<"equivalente en yardas :"<<yardas<<endl;
	cout<<"equivalente en centimetros :"<<centimetros<<endl;
	cout<<"equivalente en metros :"<<metros<<endl;
	return 0;
	
}
