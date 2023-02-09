#pragma once
#include "Trabajador.h"
#include "Programa.h"
#include <iostream>
using namespace std;

class Piloto : public Trabajador {
private:
	string nacionalidad;
	string licencia;
	string vigencia;
	int altura;
	int peso;
public:
	Piloto(string nombre, string area, string aereolinea, int edad, int id, string nacionalidad, string licencia, string vigencia, int altura, int peso) : Trabajador(nombre, area, aereolinea, edad, id) {
		this->nacionalidad = nacionalidad;
		this->licencia = licencia;
		this->vigencia = vigencia;
		this->altura = altura;
		this->peso = peso;
	};
	string getNacionalidad();
	string getLicencia();
	string getVigencia();
	int getAltura();
	int getPeso();
	void setNacionalidad(string _nac);
	void setLicencia(string _lic);
	void setVigencia(string _vig);
	void setAltura(int _altura);
	void setPeso(int _peso);
};

