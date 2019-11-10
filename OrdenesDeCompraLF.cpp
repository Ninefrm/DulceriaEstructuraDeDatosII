//
// Created by Ninefrm on 09/11/2019.
//

#include "OrdenesDeCompraLF.h"

void OrdenesDeCompraLF::setCodigoProducto(char *X) {
    strcpy(CodigoProducto, X);
}

void OrdenesDeCompraLF::setCantidadProducto(int X) {
    CantidadProducto = X;
}

void OrdenesDeCompraLF::setPrecioProducto(float X) {
    PrecioProducto = X;
}

void OrdenesDeCompraLF::setTotalProducto(float X) {
    TotalProducto = X;
}

void OrdenesDeCompraLF::setCodigoCliente(char *X) {
    strcpy(CodigoCliente, X);
}

void OrdenesDeCompraLF::setNombreCliente(char *X) {
    strcpy(NombreCliente, X);
}

void OrdenesDeCompraLF::setCodigoEmpleado(char *X) {
    strcpy(CodigoEmpleado, X);
}

void OrdenesDeCompraLF::setNombreEmpleado(char *X) {
    strcpy(NombreEmpleado, X);
}

char *OrdenesDeCompraLF::getCodigoProducto() {
    return CodigoProducto;
}

int OrdenesDeCompraLF::getCantidadProducto() {
    return CantidadProducto;
}

float OrdenesDeCompraLF::getPrecioProducto() {
    return PrecioProducto;
}

float OrdenesDeCompraLF::getTotalProducto() {
    return TotalProducto;
}

char *OrdenesDeCompraLF::getCodigoCliente() {
    return CodigoCliente;
}

char *OrdenesDeCompraLF::getNombreCliente() {
    return NombreCliente;
}

char *OrdenesDeCompraLF::getCodigoEmpleado() {
    return CodigoEmpleado;
}

char *OrdenesDeCompraLF::getNombreEmpleado() {
    return NombreEmpleado;
}

void OrdenesDeCompraLF::setCodigoOrden(char *X) {
    strcpy(CodigoOrden, X);
}

char *OrdenesDeCompraLF::getCodigoOrden() {
    return CodigoOrden;
}
