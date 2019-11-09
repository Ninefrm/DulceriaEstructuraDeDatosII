//
// Created by Ninefrm on 09/11/2019.
//
#include <iostream>
#include <stdlib.h>
#include <ProductoLV.h>
#include "ProveedorCD.h"

int main(){
    Producto A;
//
ProveedorCD B;
//B.AgregarProveedor();
B.ImprimirProveedores();
//B.BuscarProveedores();
std::cout<<"Hola";
//B.ModificarProveedores();
B.EliminarProveedor();
B.ImprimirProveedores();

    return 0;
}