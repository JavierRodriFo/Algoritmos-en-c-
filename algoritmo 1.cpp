#include<iostream>

using namespace std;

int main(){
	
	int descripcion, numero_unidades;
	
	cout<<"digite la descripcion:"; 
	cin>> descripcion;
	
	cout<<"digite numero de unidades :";
	 cin>>numero_unidades;
	
	float costo_materiales=3.5;
	
	int costo_fijo = 10700;
	
	float costo_total = (numero_unidades * costo_materiales) + costo_fijo;
	
	cout<<costo_total;
   
    return 0;
}
