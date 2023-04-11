/*2. Elaborar un algoritmo que calcule e imprima el costo de un terreno cuadrado o rectangular, teniendo como datos la anchura y la longitud en metros y el costo del metro cuadrado.*/

#include<iostream>
using namespace std;
int main(){
	int anchura, longitud, costo;
	cout<<"Digite la anchura en metros :";cin>> anchura;
	cout<<"Digite la longitud en metros :";cin>>longitud;
	cout<<"digite el costo del metro cuadrado :";cin>>costo;
	float valor_area=anchura*longitud;
	float valor_total=valor_area*costo;
	cout<<"el costo total del terreno es :" << valor_total <<endl;
	return 0;
}


