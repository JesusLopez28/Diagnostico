#include "Programa.h"
#include "Avion.h"
#include "Piloto.h"
#include <iostream>
using namespace std;

Programa::Programa(){}

void Programa::menu(){
	int opc = 0;

	while (opc != 3) {
		system("cls");
		cout << "Bienvenido" << endl;
		cout << "En que opcione desea hacer acciones?" << endl;
		cout << "1.- Piloto" << endl;
		cout << "2.- Avion" << endl;
		cout << "3.- Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> opc;

		switch (opc){
		case 1:
			menu_piloto();
			break;
		case 2:
			menu_avion();
			break;
		}
	}
	system("cls");
	cout << "Gracias por usar mi programa" << endl;
}

void Programa::menu_piloto(){
	int opc = 0;
	string nombre, area, aereolinea, nacionalidad, licencia, vigencia;
	int edad, id, altura, peso;
	Piloto* piloto = new Piloto("X", "X", "X", 0, 0, "X", "X", "X", 0, 0);
	while (opc != 3) {
		system("cls");
		cout << "PILOTO" << endl;
		contenido_menu();
		cin >> opc;
		if (opc == 1) {
			system("cls");
			cout << "Ingrese el Id: ";
			cin >> id;
			piloto->setId(id);
			system("cls");
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			piloto->setNombre(nombre);
			system("cls");
			cout << "Ingrese el area correspondiente: ";
			cin >> area;
			piloto->setArea(area);
			system("cls");
			cout << "Ingrese la aerolinea: ";
			cin >> aereolinea;
			piloto->setAereolinea(aereolinea);
			system("cls");
			cout << "Ingrese la nacionalidad: ";
			cin >> nacionalidad;
			piloto->setNacionalidad(nacionalidad);
			system("cls");
			cout << "Ingrese la licencia: ";
			cin >> licencia;
			piloto->setLicencia(licencia);
			system("cls");
			cout << "Ingrese la vigencia: ";
			cin >> vigencia;
			piloto->setVigencia(vigencia);
			system("cls");
			cout << "Ingrese la edad: ";
			cin >> edad;
			piloto->setEdad(edad);
			system("cls");
			cout << "Ingrese la altura: ";
			cin >> altura;
			piloto->setAltura(altura);
			system("cls");
			cout << "Ingrese el peso: ";
			cin >> peso;
			piloto->setPeso(peso);
			system("cls");
			cout << "Datos ingresados con exito" << endl;
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			cout << "DATOS DEL PILOTO:" << endl;
			cout << "ID: " << piloto->getId() << endl;
			cout << "Nombre: " << piloto->getNombre() << endl;
			cout << "Area: " << piloto->getArea() << endl;
			cout << "Aerolinea: " << piloto->getAereolinea() << endl;
			cout << "Edad: " << piloto->getEdad() << endl;
			cout << "Nacionalidad: " << piloto->getNacionalidad() << endl;
			cout << "Licencia: " << piloto->getLicencia() << endl;
			cout << "Vigencia: " << piloto->getVigencia() << endl;
			cout << "Altura: " << piloto->getAltura() << "cm" << endl;
			cout << "Peso: " << piloto->getPeso() << "kg" << endl;
			system("pause");
		}
	} delete piloto;
}

void Programa::menu_avion(){
	int opc = 0;
	string modelo, aereolinea, tamaño;
	int pasajeros;
	bool disponible;
	Avion* avion = new Avion("X", "X", "X", 0, false);
	while (opc != 3) {
		system("cls");
		cout << "AVION" << endl;
		contenido_menu();
		cin >> opc;
		if (opc == 1) {
			system("cls");
			cout << "Ingrese el modelo: ";
			cin >> modelo;
			avion->setModelo(modelo);
			system("cls");
			cout << "Ingrese la aereolinea: ";
			cin >> aereolinea;
			avion->setAereolinea(aereolinea);
			system("cls");
			cout << "Ingrese el tamaño del avion: ";
			cin >> tamaño;
			avion->setTamaño(tamaño);
			system("cls");
			cout << "Ingrese la cantidad de pasajeros: ";
			cin >> pasajeros;
			avion->setPasajeros(pasajeros);
			system("cls");
			cout << "Esta disponible?: ";
			cin >> disponible;
			avion->setDisponible(disponible);
			system("cls");
			cout << "Datos ingresados con exito" << endl;
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			cout << "DATOS DEL AVION:" << endl;
			cout << "Modelo: " << avion->getModelo() << endl;
			cout << "Aerolinea: " << avion->getAereolinea() << endl;
			cout << "Tamaño: " << avion->getTamaño() << endl;
			cout << "Pasajeros: " << avion->getPasajeros() << endl;
			cout << "Disponible: " << avion->getDisponible() << endl;
			system("pause");
		}
	}delete avion;
}

void Programa::contenido_menu(){
	cout << "1.- Registrar" << endl;
	cout << "2.- Imprimir" << endl;
	cout << "3.- Regresar" << endl;
	cout << "Elige una opcion: ";
}
