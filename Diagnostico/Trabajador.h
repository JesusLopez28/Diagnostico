#pragma once
#include "Programa.h"
#include <iostream>
using namespace std;

class Trabajador{
private:
	string nombre;
	string area;
	string aereolinea;
	int edad;
	int id;
public:
	Trabajador(string nombre, string area, string aereolinea, int edad, int id) {
		this->nombre = nombre;
		this->area = area;
		this->aereolinea = aereolinea;
		this->edad = edad;
		this->id = id;
	};
	string getNombre();
	string getArea();
	string getAereolinea();
	int getEdad();
	int getId();
	void setNombre(string _name);
	void setArea(string _area);
	void setAereolinea(string _line);
	void setEdad(int _age);
	void setId(int _id);
};

