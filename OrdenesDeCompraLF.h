//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_ORDENESDECOMPRALF_H
#define DULCERIAESTRUCTURADEDATOSII_ORDENESDECOMPRALF_H
#include "iostream"
#include "fstream"
#include "cstring"
#include <string.h>

class OrdenesDeCompraLF {
    private:
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
        void setCodigoOrden(char* X);
        void setCodigoProducto(char* X);
        void setCantidadProducto(int X);
        void setPrecioProducto(float X);
        void setTotalProducto(float X);
        void setCodigoCliente(char* X);
        void setNombreCliente(char* X);
        void setCodigoEmpleado(char* X);
        void setNombreEmpleado(char* X);

        char* getCodigoOrden();
        char* getCodigoProducto();
        int getCantidadProducto();
        float getPrecioProducto();
        float getTotalProducto();
        char* getCodigoCliente();
        char* getNombreCliente();
        char* getCodigoEmpleado();
        char* getNombreEmpleado();

};


#endif //DULCERIAESTRUCTURADEDATOSII_ORDENESDECOMPRALF_H
