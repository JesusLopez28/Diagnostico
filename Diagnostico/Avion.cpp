#include "Avion.h"

string Avion::getModelo(){
    return modelo;
}

string Avion::getAereolinea(){
    return aereolinea;
}

string Avion::getTamaño(){
    return tamaño;
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

void Avion::setTamaño(string _tam){
    this->tamaño = _tam;
}

void Avion::setPasajeros(int _pas){
    this->pasajeros = _pas;
}

void Avion::setDisponible(bool _dis){
    this->disponible = _dis;
}
