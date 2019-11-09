//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_PRODUCTOLV_H
#define DULCERIAESTRUCTURADEDATOSII_PRODUCTOLV_H
#include "iostream"
#include "fstream"
#include "cstring"

class Producto{
private:
    char Codigo[10];
    char Nombre[20];
    char Descripcion[30];
    char Precio[15];
    int Buff, Buff2, Buff3, BuffN;
public:
    void Agregar();
    void Imprimir();
    void Buscar();
    void Modificar();
    void Eliminar();
};

#endif //DULCERIAESTRUCTURADEDATOSII_PRODUCTOLV_H
