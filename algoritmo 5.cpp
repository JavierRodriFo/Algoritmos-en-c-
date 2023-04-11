/*5.La velocidad de la luz es de 300 000 kilómetros por segundo. Elaborar un algoritmo que lea un tiempo en segundos e imprima la distancia que recorre la luz en dicho tiempo.*/
#include<iostream>
using namespace std;
int main(){
	int tiempo,distancia;
	cout<<"ingrese el timpo e segundos :";cin>>tiempo;
	distancia=tiempo*300000;
	cout<<"la distancia que recorre la luz en dicho tiempo es de :"<<distancia<<endl;
	return 0;
}
