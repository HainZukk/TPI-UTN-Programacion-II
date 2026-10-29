#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class fecha {   
    private:
    int _dia;
    int _mes;
    int _anio;
    public:
    //Constructor
    fecha();
    //Metodos
    bool validarFecha();
    bool esBisiesto();
    void cargar();
    void mostrar();

    //Setters   
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    //Getters
    int getDia();
    int getMes();
    int getAnio();
};


#endif