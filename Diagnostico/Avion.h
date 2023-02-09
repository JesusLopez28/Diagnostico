#pragma once
#include "Programa.h"
#include <iostream>
using namespace std;

class Avion{
private:
	string modelo;
	string aereolinea;
	string tamaño;
	int pasajeros;
	bool disponible;
public:
	Avion(string modelo, string aereolinea, string tamaño, int pasajeros, bool disponible){
		this->modelo = modelo;
		this->aereolinea = aereolinea;
		this->tamaño = tamaño;
		this->pasajeros = pasajeros;
		this->disponible = disponible;
	};
	string getModelo();
	string getAereolinea();
	string getTamaño();
	int getPasajeros();
	bool getDisponible();
	void setModelo(string _mod);
	void setAereolinea(string _aer);
	void setTamaño(string _tam);
	void setPasajeros(int _pas);
	void setDisponible(bool _dis);
};

