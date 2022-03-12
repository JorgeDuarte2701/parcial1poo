#include "cursos.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,curso;
	int codigo,no1,no2,no3,no4;
	string estu;
	int promedio,ne;
		cout<<"Ingrese no de estudiantes :";
		cin>>ne;
	for(int i=1; i<=ne;i++){
	cout<<"*********************"<<endl;

	cout<<"Ingresar codigo :";
	cin>>codigo;
	cout<<"Ingresar Nombres :";
	cin>>nombres;
	cout<<"Ingresar Apellidos :";
	cin>>apellidos;
	cout<<"Ingrese su curso :";
	cin>>curso;
	cout<<"Ingresar la nota1 del 0 al 100:";
	cin>>no1;
	cout<<"Ingresar la nota2 del 0 al 100: :";
	cin>>no2;
	cout<<"Ingresar la nota3 del 0 al 100: :";
	cin>>no3;
	cout<<"Ingresar la nota4 del  0 al 100::";
	cin>>no4;
	
	promedio = (no1+no2 +no3 +no4)/4;
	if (promedio >=61){
		cout<"***********************************"<<endl;
		cout<<"Felicidades tienes los cursos aprobados"<<endl;
		cout<<"su promedio es: "<<promedio<<endl;
	}
	else {
			cout<"***********************************"<<endl;
			cout<<"Cursos reprobados, echale ganas"<<endl;
			cout<<"su promedio es: "<<promedio<<endl;
	}
	
	//instancia de un objeto
	cursos obj = cursos(nombres,apellidos,curso,no1,no2,no3,no4,codigo);
	obj.mostrar();
}
//	cout<<"DAtos del cliente :"<<obj.mostrar()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono();
	
}
