#include <iostream>
#include "fecha.h"

fecha::fecha(){
    _dia = 1;
    _mes = 1;
    _anio = 2000;
}

//Setters
void fecha::setDia(int d){
    _dia = d;
}
void fecha::setMes(int m){
    _mes = m;
}
void fecha::setAnio(int a){
    _anio = a;
}
//Getters
int fecha::getDia(){
    return _dia;
}
int fecha::getMes(){
    return _mes;
}
int fecha::getAnio(){
    return _anio;
}

//Metodos

bool fecha::esBisiesto(){
    return (_anio % 4 == 0 && _anio % 100 != 0) || _anio % 400 == 0;
};

//TODO : Preguntar sobre algun metodo para validar ingreso de valores numericos y no texto
bool fecha::validarFecha(){
    if (_anio < 1900 || _anio > 2100) {
        return false;
    }
    if (_mes < 1 || _mes > 12){
        return false;
    }
    if (_dia < 1){
        return false;
    }
    int diaMeses[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (esBisiesto()){
        diaMeses[1] = 29;
    }
    if (_dia > diaMeses[_mes - 1]){
        return false;
    }
    
    return true;
}

void fecha::cargar(){
    std::cout << "Ingrese dia: ";
    std::cin >> _dia;
    std::cout << "Ingrese mes: ";
    std::cin >> _mes;
    std::cout << "Ingrese año: ";
    std::cin >> _anio;

    while (!validarFecha()){
        std::cout << "Fecha invalida. Reingrese dia, mes y anio:\n";
        std::cout << "Dia: ";
        std::cin >> _dia;
        std::cout << "Mes: ";
        std::cin >> _mes;
        std::cout << "Anio: ";
        std::cin >> _anio;
    }
    
}

void fecha::mostrar(){
    std::cout << _dia << "/" << _mes << "/" << _anio << std::endl;
}