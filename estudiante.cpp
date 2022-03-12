#include <iostream>
using namespace std;
class estudiante {
	//atributos
	protected : string nombres,apellidos, curso;
		int no1,no2,no3,no4;
	
	//constructor
	protected : 
	estudiante(){
			
		}	
		estudiante(string nom,string ape,string cu ,int n1,int n2, int n3,int n4, int c){
			nombres=nom;
			apellidos=ape;
		curso=cu;
		no1=n1;
		no2=n2;
		no3=n3;
		no4=n4;
		}	
	//metodo

	void mostrar();
	
};
