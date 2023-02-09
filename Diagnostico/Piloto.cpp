#include "Piloto.h"

string Piloto::getNacionalidad(){
    return nacionalidad;
}

string Piloto::getLicencia(){
    return licencia;
}

string Piloto::getVigencia(){
    return vigencia;
}

int Piloto::getAltura(){
    return altura;
}

int Piloto::getPeso(){
    return peso;
}

void Piloto::setNacionalidad(string _nac){
    this->nacionalidad = _nac;
}

void Piloto::setLicencia(string _lic){
    this->licencia = _lic;
}

void Piloto::setVigencia(string _vig){
    this->vigencia = _vig;
}

void Piloto::setAltura(int _altura){
    this->altura = _altura;
}

void Piloto::setPeso(int _peso){
    this->peso = _peso;
}
