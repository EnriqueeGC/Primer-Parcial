#include<iostream>
#include"Persona.cpp"
using namespace std;

main(){
	char s;
	string nombre, apellido, curso;
	int codigo, nota1, nota2, nota3, nota4;
	
	do{
		
	cout<<"Ingresa Codigo: ";
	cin>>codigo;
	cout<<"Ingresa Nombre: ";
	cin>>nombre;
	cout<<"Ingresa Apellido: ";
	cin>>apellido;
	cout<<"Ingresa Curso: ";
	cin>>curso;
	cout<<"Ingresa la nota 1: ";
	cin>>nota1;
	cout<<"Ingresa la nota 2: ";
	cin>>nota2;
	cout<<"Ingresa la nota 3: ";
	cin>>nota3;
	cout<<"Ingresa la nota 4: ";
	cin>>nota4;
	
	Persona obj = Persona(nombre, apellido, curso, codigo, nota1, nota2, nota3, nota4);
	obj.mostrar();
	cout<<"Desea ingresar otro alumno (s/n): ";
	cin>>s;
	cout<<"_______________________________________\n";
	}while(s=='s');
}