#include "Avion.h"

string Avion::getModelo(){
    return modelo;
}

string Avion::getAereolinea(){
    return aereolinea;
}

string Avion::getTama�o(){
    return tama�o;
}

int Avion::getPasajeros(){
    return pasajeros;
}

bool Avion::getDisponible(){
    return disponible;
}

void Avion::setModelo(string _mod){
    this->modelo = _mod;
}

void Avion::setAereolinea(string _aer){
    this->aereolinea = _aer;
}

void Avion::setTama�o(string _tam){
    this->tama�o = _tam;
}

void Avion::setPasajeros(int _pas){
    this->pasajeros = _pas;
}

void Avion::setDisponible(bool _dis){
    this->disponible = _dis;
}
