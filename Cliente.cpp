//
// Created by Ninefrm on 09/11/2019.
//

#include "Cliente.h"

void Cliente::setCodigoCliente(char *X) {
 strcpy(CodigoCliente,X);
}
void Cliente::setNombreCliente(char *X) {
    strcpy(NombreCliente,X);
}
void Cliente::setRFC(char *X) {
    strcpy(RFC, X);
}
void Cliente::setDireccion(char *X) {
    strcpy(Direccion, X);
}
void Cliente::setColonia(char *X) {
    strcpy(Colonia, X);
}
void Cliente::setCiudad(char *X) {
    strcpy(Ciudad, X);
}
void Cliente::setEstado(char *X) {
    strcpy(Estado, X);
}

char *Cliente::getCodigoCliente() {
    return CodigoCliente;
}
char *Cliente::getNombreCliente(){
    return NombreCliente;
}
char *Cliente::getRFC(){
    return RFC;
}
char *Cliente::getDireccion(){
    return Direccion;
}
char *Cliente::getColonia(){
    return Colonia;
}
char *Cliente::getCiudad(){
    return Ciudad;
}
char *Cliente::getEstado(){
    return Estado;
}

