/*4.Similar al del alumno (Ejercicio 3.5.2), con la diferencia de que en lugar del promedio se obtiene una califi cación fi nal multiplicando las califi caciones 1,2,3 y 4 por los porcentajes 30, 20,10 y 40 %, respectivamente, y sumando los 
productos.*/
#include<iostream>
using namespace std;
int main(){
	string nombre_estudiante;
	int calificacion1,calificacion2,calificacion3,calificacion4;
	cout<<"digite nombre del alumno :"; cin>>nombre_estudiante;
	cout<<"digite calificacion 1 :"; cin>>calificacion1;
	cout<<"digite calificacion 2 :"; cin>>calificacion2;
	cout<<"digite calificacion 3 :"; cin>>calificacion3;
	cout<<"digite calificacion 4 :"; cin>>calificacion4;
	float promedio_total=calificacion1*0.30+calificacion2*0.20+calificacion3*0.10+calificacion4*0.40;
	cout<<promedio_total;
	return 0;
}
	
