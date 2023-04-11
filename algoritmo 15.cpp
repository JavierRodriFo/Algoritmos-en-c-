/*15.Elaborar un algoritmo que lea la cantidad de dólares que se va a comprar y el
tipo de cambio (costo de un dólar) en: yenes, pesetas, libras esterlinas y marcos. Calcular e imprimir la cantidad que se debe pagar en yenes, pesetas, libras
esterlinas y marcos.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int dolares, yenes,pesetas,libras_esterlinas, marcos;
	cout<<"ingrese cantidad de dolares que se va a comprar : ";cin>>dolares;
	cout<<"ingrese el costo de un dolar en yenes :";cin>>yenes;
	cout<<"ingrese el costo de un dolar en pesetas :";cin>>pesetas;
	cout<<"ingrese el costo de un dolar en  libras esterlinas :";cin>>libras_esterlinas;
	cout<<"ingrese el costo de un dolar en marcos :";cin>>marcos;
	yenes=dolares*yenes;
	pesetas=dolares*pesetas;
	libras_esterlinas=dolares*libras_esterlinas;
	marcos=dolares*marcos;
	cout<<"la cantidad que debe pagar en yenes es :"<<yenes<<endl;
	cout<<"la cantidad que debe pagar en pesetas es :"<<pesetas<<endl;
	cout<<"la cantidad que debe pagar en libras esterlinas es :"<<libras_esterlinas<<endl,
	cout<<"la cantidad que debe pagar en marcos es :"<<marcos<<endl;
	return 0;
}

