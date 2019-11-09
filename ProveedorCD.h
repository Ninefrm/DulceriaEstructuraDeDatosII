//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_PROVEEDORCD_H
#define DULCERIAESTRUCTURADEDATOSII_PROVEEDORCD_H
#include "iostream"
#include "fstream"
#include "cstring"
#include <string.h>

class ProveedorCD {

    private:
        char NombreEmpresa[20];
        char Telefono[15];
        char Direccion[30];
        char Apellidos[30];
        char Nombre[30];
    public:
        void AgregarProveedor();
        void ImprimirProveedores();
        void BuscarProveedores();
        void ModificarProveedores();
        void EliminarProveedor();

};


#endif //DULCERIAESTRUCTURADEDATOSII_PROVEEDORCD_H
