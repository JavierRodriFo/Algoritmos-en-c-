/*11.Elaborar un algoritmo que lea la cantidad de d�lares que se va a comprar y el tipo de cambio en pesos (costo de un d�lar en pesos). Calcular e imprimir la
cantidad que se debe pagar en pesos por la cantidad de d�lares indicada.*/
#include<iostream>
using namespace std;
int main(){
	int cantdolares, valor_dolar_pesos,valorapagar;
	cout<<"ingresar la cantidad de dolares que se va a comprar: ";cin>>cantdolares;
	cout<<"ingrese el costo de un dolar en pesos";cin>>valor_dolar_pesos;
	valorapagar=cantdolares*valor_dolar_pesos;
	cout<<"la cantidad que se debe pagar en pesos por la cantidad de d�lares indicada es :"<<valorapagar<<endl;
	return 0;
	
	
}
