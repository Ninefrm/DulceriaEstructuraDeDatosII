//
// Created by Ninefrm on 09/11/2019.
//
#include <iostream>
#include <stdlib.h>
#include <ProductoLV.h>
#include "ProveedorCD.h"
#include "OrdenesDeCompraLF.h"
#include "FuncionesOrdenesDeCompra.h"
#include "IndizacionCliente.h"

int main(){
    Producto A;
//
    ProveedorCD B;
//
    FuncionesOrdenesDeCompra W;
//
//A.Imprimir();
//B.ImprimirProveedores();
//W.Imprimir();

//    IndizacionCliente *Ind = new IndizacionCliente();
//
//    Ind->Agregar();
//    delete Ind;
//    Ind = new IndizacionCliente();
//    Ind->Agregar();
//    delete Ind;
IndizacionCliente Ind;

//    Ind.Agregar();
//    Ind.Agregar();
    std::cout<<"-----";
//    Ind = new IndizacionCliente();
//    Ind->Imprimir_Indices();
//    Ind->Buscar();
//    delete Ind;
//    Ind.Imprimir_Indices();
//    std::cout<<"-----";
//    Ind.Imprimir_Clientes();
Ind.Buscar();

    return 0;
}