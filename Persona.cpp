#include<iostream>
#include "Estudiante.cpp"
using namespace std;

class Persona : Estudiante {
	public : Persona(string nom, string ape, string cur, int cod, int n1, int n2, int n3, int n4) : Estudiante(nom, ape, cur, cod, n1, n2, n3, n4){
	}
	void setNombre(string nom){nombre = nom;}
	void setApellido(string ape){apellido = ape;}
	void setCurso(string cur){curso = cur;}
	void setCodigo(int cod){codigo = cod;}
	void setNota1(int n1){nota1 = n1;}
	void setNota2(int n2){nota2 = n2;}
	void setNota3(int n3){nota3 = n3;}
	void setNota4(int n4){nota4 = n4;}
	
	string getNombre(){return nombre;}
	string getApellido(){return apellido;}
	string getCurso(){return curso;}
	int getCodigo(){return codigo;}
	int getNota1(){return nota1;}
	int getNota2(){return nota2;}
	int getNota3(){return nota3;}
	int getNota4(){return nota4;}
	
	void mostrar(){
		int r;
		
		cout<<"_________________________________________________\n";
		cout<<"Codigo : "<<codigo<<endl;
		cout<<"Nombre : "<<nombre<<endl;
		cout<<"Apellido : "<<apellido<<endl;
		cout<<"Curso : "<<curso<<"  N1: "<<nota1<<"  ,"<<" N2: "<<nota2<<"  ,"<<" N3: "<<nota3<<"  ,"<<" N4: "<<nota4<<endl;
		
		r=(nota1+nota2+nota3+nota3+nota4)/4;
		if(r>=60){
			cout<<"Aprobado\n";
			cout<<"_________________________________"<<endl;
		}
		if(r<=60){
			cout<<"Reprobado\n";
			cout<<"_________________________________"<<endl;
		} 
			
	}
	
};