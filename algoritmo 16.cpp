/*16.Elaborar un algoritmo que permita leer un valor e imprima el logaritmo natural, el exponencial, el valor absoluto y la raíz cuadrada.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int valor;
	cout<<"ingrese el valor deseado :";cin>>valor;
	double  lg=log(valor);
	double expo=exp(valor);
	double valabsoluto=abs(valor);
	double raiz=sqrt(valor);
	cout<<"El logaritmo natural es :"<<lg<<endl;
	cout<<"el valor exponencial es :"<<expo<<endl;
	cout<<"El valor absolutoes :"<<valabsoluto<<endl;
	cout<<"La raiz cuadrada es igual a :"<<raiz<<endl;

	return 0;
	
}
