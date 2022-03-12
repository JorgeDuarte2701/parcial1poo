#include "estudiante.cpp"
#include <iostream>
using namespace std;

class cursos : estudiante {
	//atributos
	private : int codigo;
	
	//constructor
	public :
	cursos (){
		}
		
		cursos(string nom,string ape,string cu ,int n1,int n2,int n3,int n4,int c) : estudiante(nom,ape,cu,n1,n2,n3,n4,c){
		codigo =c ;		
		}
		
	//metodos
	//set (modificar)
	void setCodigo(int c){codigo=c;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setCurso(string cu){curso=cu;}
	void setNota1(int n1){no1=n1;}
	void setNota2(int n2){no2=n2;}	
	void setNota3(int n3){no3=n3;}
	void setNota4(int n4){no4=n4;}
	//get (mostrar)
	int getCodigo(){return codigo;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCursos(){return curso;}
	int getNota1(){return no1;}
	int getNota2(){return no2;}
	int getNota3(){return no3;}
	int getNota4(){return no4;}

	
	void mostrar(){
		cout<<"---------------------------"<<endl;
		cout<<codigo<<","<<nombres<<","<<apellidos<<","<<curso<<","<<no1<<","<<no2<<","<<no3<<","<<no4<<endl;
	}
};
