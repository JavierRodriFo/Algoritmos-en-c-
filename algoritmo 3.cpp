/*3.Elaborar un algoritmo que lea una cantidad de horas e imprima su equivalente en minutos, segundos y días.*/

#include<iostream>
using namespace std;
int main(){
	int horas, minutos, segundos, dias;
	cout<<"Digite la cantidad de horas:"; cin>>horas;
	segundos= horas*3600;
	minutos=horas*60;
	dias=horas/24;
	cout<<"esa cantidad de horas equivale a esta cantidad de segundos :"<<segundos<<endl;
	cout<<"esa cantidad de horas equivale a esta cantidad de minutos :"<<minutos<<endl;
	cout<<"esa cantidad de horas equivale a esta cantidad de dias :"<<dias<<endl;
	return 0;
	
}
