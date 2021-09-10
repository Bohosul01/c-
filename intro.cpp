#include <iostream>

using namespace std;

void mostrar_datos(int edad, char sexo[10], float altura);
void mostrar_edad(int edad);
void mostrar_sexo(char sexo[10]);
void mostrar_altura(float altura);

int main(){
	int edad;
	char sexo[10];
	float altura;

	cout << "Introduce tu edad" << endl;
	cin >> edad;
	cout << "Introduce tu sexo" << endl;
	cin >> sexo;
	cout << "Introduce tu altura" << endl;
	cin >> altura;

	mostrar_datos(edad, sexo, altura);

	return 0;
}

void mostrar_datos(int edad, char sexo[10], float altura){
	mostrar_sexo(sexo);
	mostar_edad(edad);
	mostrar_altura(altura);
}

void mostrar_edad(int edad){
	cout << edad << endl;
}

void mostrar_sexo(char sexo[10]){
	cout << sexo << endl;
}

void mostrar_altura(float altura){
	cout << altura << endl;
}