//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_FUNCIONESORDENESDECOMPRA_H
#define DULCERIAESTRUCTURADEDATOSII_FUNCIONESORDENESDECOMPRA_H


#include "OrdenesDeCompraLF.h"

class FuncionesOrdenesDeCompra {
    private:
    OrdenesDeCompraLF Orden;
    char CodigoOrden[20];
    char CodigoProducto[20];
    int CantidadProducto;
    float PrecioProducto;
    float TotalProducto;
    char CodigoCliente[30];
    char NombreCliente[30];
    char CodigoEmpleado[30];
    char NombreEmpleado[30];
    public:
    void Agregar();
    void Imprimir();
    void Buscar();
    void Modificar();
    void Eliminar();
};


#endif //DULCERIAESTRUCTURADEDATOSII_FUNCIONESORDENESDECOMPRA_H
