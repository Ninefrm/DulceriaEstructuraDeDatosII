//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_CLIENTE_H
#define DULCERIAESTRUCTURADEDATOSII_CLIENTE_H
#include "iostream"
#include "fstream"
#include "cstring"
#include <string.h>

class Cliente {
    private:
    char CodigoCliente[30];
    char NombreCliente[30];
    char RFC[14];
    char Direccion[40];
    char Colonia[20];
    char Ciudad[20];
    char Estado[20];
public:
    void setCodigoCliente(char* X);
    void setNombreCliente(char* X);
    void setRFC(char* X);
    void setDireccion(char* X);
    void setColonia(char* X);
    void setCiudad(char* X);
    void setEstado(char* X);

    char* getCodigoCliente();
    char* getNombreCliente();
    char* getRFC();
    char* getDireccion();
    char* getColonia();
    char* getCiudad();
    char* getEstado();

    Cliente(){
        std::memset(CodigoCliente,'\0',30);
        std::memset(NombreCliente,'\0',30);
        std::memset(RFC,'\0',14);
        std::memset(Direccion,'\0',40);
        std::memset(Colonia,'\0',20);
        std::memset(Ciudad,'\0',20);
        std::memset(Estado,'\0',20);
    }
};


#endif //DULCERIAESTRUCTURADEDATOSII_CLIENTE_H
