/*12.Elaborar un algoritmo que permita leer valores para X, Y, Z y W e imprima el valor de F.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,y,z,w,b,ecuacion1,ecuacion2,ecuacion3,ecuacion4,ecuacion5,ecuacion6,ecuacion7;
	cout<<"ingrese el valor de x :"; cin>>x;
	cout<<"ingrese el valor de y :";cin>>y;
	cout<<"ingrese el valor de z :";cin>>z;
	cout<<"ingrese el valor de w :";cin>>w;
	ecuacion1=4*(x*x)*(y*y)*2*z*w ;
	ecuacion2=ecuacion1*ecuacion1;
	ecuacion3=4*x;
	ecuacion4=pow(ecuacion3,1/2);
	ecuacion5=pow(b,3/4);
	ecuacion6=ecuacion4/ecuacion5;
	ecuacion7=ecuacion2/ecuacion6;
	cout<<"el valor de f es :"<<ecuacion7<<endl;
	return 0;
	
	
}
