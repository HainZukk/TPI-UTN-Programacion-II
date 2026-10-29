#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "fecha.h"

class empleado {
    private: 
    int _nroEmpleado;
    char _direccion[60];
    char _cuil[14];
    fecha fechaIngreso;
    fecha fechaEgreso;
    public:
    void cargar();
    void mostrar();
    
    // Setters
    void setNroEmpleado(int nro);
    void setDireccion(const char* dir);
    void setCuil(const char* c);
    void setFechaIngreso(fecha fi);
    void setFechaEgreso(fecha fe);

    // Getters
    int getNroEmpleado();
    const char* getDireccion();
    const char* getCuil();
    fecha getFechaIngreso();
    fecha getFechaEgreso();
};



#endif 