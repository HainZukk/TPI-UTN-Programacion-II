#include <iostream>
#include <cstring>
#include "empleado.h"

//setters
void empleado::setNroEmpleado(int nro){
    _nroEmpleado = nro;
}
void empleado::setDireccion(const char* dir) {
    strcpy(_direccion, dir);
}

void empleado::setCuil(const char* c) {
    strcpy(_cuil, c);
}

void empleado::setFechaIngreso(fecha fi) {
    fechaIngreso = fi;
}

void empleado::setFechaEgreso(fecha fe) {
    fechaEgreso = fe;
}
//getters
int empleado::getNroEmpleado(){
    return _nroEmpleado;
}
const char* empleado::getDireccion(){
    return _direccion;
}
const char* empleado::getCuil() {
    return _cuil;
}
fecha empleado::getFechaIngreso() {
    return fechaIngreso;
}
fecha empleado::getFechaEgreso() {
    return fechaEgreso;
}
//metodos

void empleado::cargar(){
    std::cout << "Ingrese el numero de empleado: ";
    std::cin >> _nroEmpleado;
    std::cin.ignore();

    std::cout << "Ingrese la direccion: ";
    std::cin.getline(_direccion,60);

    std::cout << "Ingrese el cuil: ";
    std::cin.getline(_cuil,14);

    std::cout << "--Fecha de ingreso--" << std::endl;
    fechaIngreso.cargar();

    std::cout << "--Fecha de egreso--" << std::endl;
    fechaEgreso.cargar();

}

void empleado::mostrar() {
    std::cout << "Numero de Empleado: " << _nroEmpleado << std::endl;
    std::cout << "Direccion: " << _direccion << std::endl;
    std::cout << "CUIL: " << _cuil << std::endl;
    std::cout << "Fecha de Ingreso: ";
    fechaIngreso.mostrar();
    std::cout << "Fecha de Egreso: ";
    fechaEgreso.mostrar();
}