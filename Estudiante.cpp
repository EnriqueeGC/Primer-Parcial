#include<iostream>
using namespace std;
class Estudiante{
	protected : string nombre, apellido, curso;
				int codigo, nota1, nota2, nota3, nota4;
				
	protected : 
			Estudiante(string nom, string ape, string cur, int cod, int n1, int n2, int n3, int n4){
				nombre = nom;
				apellido = ape;
				curso = cur;
				codigo = cod;
				nota1 = n1;
				nota2 = n2;
				nota3 = n3;
				nota4 = n4;
			}
	void mostrar();
};