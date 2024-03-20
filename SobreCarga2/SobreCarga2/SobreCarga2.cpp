#include <iostream>
#include <sstream>

using namespace std;

class Persona {

private:
	string nombre;
	int edad;
	double peso;
public:
	void iniciar(string, int, double);
	int operator +(const Persona&);//Sobrecarga de la suma ... (binaria)===> que esperados elementos
																			//de la suma
	void visualizar();
};

void Persona::iniciar(string nombre_, int edad_, double peso_)
{
	nombre = nombre_;
	edad = edad_;
	peso = peso_;

}

int Persona::operator+(const Persona& persona2)//porque recibe la de la derecha
{
	return this->edad+persona2.edad;
}

void Persona::visualizar()
{
	cout << "la informacion de esta persona es" << endl;
	cout << "Nombre " << nombre << endl;
	cout << "Anios " << edad << endl;
	cout << "Peso " << peso << "kgs" << endl;
}


int main() {
	Persona persona1;
	Persona persona2;
	persona1.iniciar("Ana", 10, 34.56);
	persona2.iniciar("Pedro", 40, 80.00);

	persona1.visualizar();
	cout << endl;
	persona2.visualizar();

	cout << "La suma de persona 1 + persona 2 = " << persona1 + persona2 << " anios" << endl;
	system("pause");
	return 0;
}