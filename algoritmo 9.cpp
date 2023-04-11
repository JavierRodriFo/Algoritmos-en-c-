/*9.Elaborar un algoritmo que lea el artículo y su costo. La utilidad es el 150% y el impuesto es el 15%. Calcular e imprimir artículo, utilidad, impuesto y precio de venta.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string nombre_articulo;
	int costo, utilidad, impuesto, venta;
	cout<<"ingrese el nombre del articulo :";cin>>nombre_articulo;
	cout<<"ingrese el costo del producto :";cin>>costo;
	
	utilidad=costo*1.5;
	impuesto=utilidad/0.15;
	venta=utilidad-impuesto;
	
	cout<<"nombre del articulo :"<<nombre_articulo <<endl;
	cout<<"valor de utilidad es :" <<utilidad <<endl;
	cout<<"valor del impuesto es :"<<impuesto <<endl;
	cout<<"el valor de precio de venta es :"<<venta<<endl;
	return 0;
	
}
