//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_INDIZACIONCLIENTE_H
#define DULCERIAESTRUCTURADEDATOSII_INDIZACIONCLIENTE_H
#include "iostream"
#include "fstream"
#include "cstring"
#include "Cliente.h"
#include "Indices.h"
#include <string.h>

class IndizacionCliente {
    private:
    Cliente ICCliente;
    Indices Indice;

    char CodigoCliente[30];
    char NombreCliente[30];
    char RFC[14];
    char Direccion[40];
    char Colonia[20];
    char Ciudad[20];
    char Estado[20];
    long int Pos=0;
    public:
    IndizacionCliente(){
        std::memset(CodigoCliente,'\0',30);
        std::memset(NombreCliente,'\0',30);
        std::memset(RFC,'\0',14);
        std::memset(Direccion,'\0',40);
        std::memset(Colonia,'\0',20);
        std::memset(Ciudad,'\0',20);
        std::memset(Estado,'\0',20);
    }
    int Orden;
    void Agregar();
    void Imprimir_Clientes();
    void Imprimir_Indices();
    void Buscar();
    void Modificar();
    void Eliminar();
};


#endif //DULCERIAESTRUCTURADEDATOSII_INDIZACIONCLIENTE_H
