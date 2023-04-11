/*20.Elaborar un algoritmo que permita leer valores para A y B e imprima Y, Z y W.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b;
	cout<<"ingrese el valor de a :"; cin>>a;
	cout<<"ingrese el valor de b :"; cin>>b;
	double y=3*(a*a)*(b*b)*(sqrt(2*a));
	double w=4*(sqrt(pow(2,a)*a))*(3*pow(a,2)*pow(b,2)-sqrt(2*a));
	double z=12*pow(a,1/2)/pow(b,3/4);
	cout<<"el valor de y es igual a :"<<y<<endl;
	cout<<"el valor de w es igual a :"<<w<<endl;
	cout<<"el valor de z es igual a :"<<z<<endl;
	return 0;
}|
