#include "Trabajador.h"

string Trabajador::getNombre(){
	return nombre;
}

string Trabajador::getArea(){
	return area;
}

string Trabajador::getAereolinea(){
	return aereolinea;
}

int Trabajador::getEdad(){
	return edad;
}

int Trabajador::getId(){
	return id;
}

void Trabajador::setNombre(string _name){
	this->nombre = _name;
}

void Trabajador::setArea(string _area){
	this->area = _area;
}

void Trabajador::setAereolinea(string _line){
	this->aereolinea = _line;
}

void Trabajador::setEdad(int _age){
	this->edad = _age;
}

void Trabajador::setId(int _id){
	this->id = _id;
}
