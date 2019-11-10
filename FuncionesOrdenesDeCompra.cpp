//
// Created by Ninefrm on 09/11/2019.
//

#include "FuncionesOrdenesDeCompra.h"

void FuncionesOrdenesDeCompra::Agregar() {
    std::cout<<"INGRESE CODIGO DE LA ORDEN: ";
    std::cin.getline(CodigoOrden,20);
    std::cout<<"INGRESE CODIGO DEL PRODUCTO: ";
    std::cin.getline(CodigoProducto,20);
    std::cout<<"INGRESE CANTIDAD DEL PRODUCTO: ";
    std::cin>>CantidadProducto;
    std::cin.ignore();
    std::cout<<"INGRESE PRECIO DEL PRODUCTO: ";
    std::cin>>PrecioProducto;
    std::cin.ignore();
    TotalProducto = CantidadProducto*PrecioProducto;

    std::cout<<"INGRESE CODIGO DEL CLIENTE: ";
    std::cin.getline(CodigoCliente,30);
    std::cout<<"INGRESE NOMBRE DEL CLIENTE: ";
    std::cin.getline(NombreCliente,30);

    std::cout<<"INGRESE CODIGO DEL EMPLEADO: ";
    std::cin.getline(CodigoEmpleado,30);
    std::cout<<"INGRESE NOMBRE DEL EMPLEADO: ";
    std::cin.getline(NombreEmpleado,30);

    Orden.setCodigoOrden(CodigoOrden);
    Orden.setCodigoProducto(CodigoProducto);
    Orden.setCantidadProducto(CantidadProducto);
    Orden.setPrecioProducto(PrecioProducto);
    Orden.setTotalProducto(TotalProducto);
    Orden.setCodigoCliente(CodigoCliente);
    Orden.setNombreCliente(NombreCliente);
    Orden.setCodigoEmpleado(CodigoEmpleado);
    Orden.setNombreEmpleado(NombreEmpleado);

    std::ofstream Ordenes("Ordenes.txt",std::ios::app);
    Ordenes.write((char *)&Orden,sizeof(Orden));
    Ordenes.close();
}

void FuncionesOrdenesDeCompra::Imprimir() {
    std::ifstream Archivo("Ordenes.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR.";
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&Orden, sizeof(Orden));
            if (Archivo.eof())break;
            std::cout<<"Codigo Orden:"<<Orden.getCodigoOrden()<<std::endl;
            std::cout<<"Codigo producto: "<<Orden.getCodigoProducto()<<std::endl;
            std::cout<<"Cantidad: "<<Orden.getCantidadProducto()<<std::endl;
            std::cout<<"Precio: "<<Orden.getPrecioProducto()<<std::endl;
            std::cout<<"Total: "<<Orden.getTotalProducto()<<std::endl;
            std::cout<<"Codigo Cliente: "<<Orden.getCodigoCliente()<<std::endl;
            std::cout<<"Nombre cliente: "<<Orden.getNombreCliente()<<std::endl;
            std::cout<<"Codigo empleado: "<<Orden.getCodigoEmpleado()<<std::endl;
            std::cout<<"Nombre empleado: "<<Orden.getNombreEmpleado()<<std::endl;
            std::cout<<"-.-.-.-.-.-.-"<<std::endl;

        }

    }
    Archivo.close();
}

void FuncionesOrdenesDeCompra::Buscar() {
    std::cout<<"INGRESE CODIGO DE LA ORDEN: ";
    std::cin.getline(CodigoOrden,20);
    std::ifstream Archivo("Ordenes.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR.";
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&Orden, sizeof(Orden));
            if(!strcmp(Orden.getCodigoEmpleado(), CodigoOrden)){
                if (Archivo.eof())break;
                std::cout<<"Codigo Orden:"<<Orden.getCodigoOrden()<<std::endl;
                std::cout<<"Codigo producto: "<<Orden.getCodigoProducto()<<std::endl;
                std::cout<<"Cantidad: "<<Orden.getCantidadProducto()<<std::endl;
                std::cout<<"Precio: "<<Orden.getPrecioProducto()<<std::endl;
                std::cout<<"Total: "<<Orden.getTotalProducto()<<std::endl;
                std::cout<<"Codigo Cliente: "<<Orden.getCodigoCliente()<<std::endl;
                std::cout<<"Nombre cliente: "<<Orden.getNombreCliente()<<std::endl;
                std::cout<<"Codigo empleado: "<<Orden.getCodigoEmpleado()<<std::endl;
                std::cout<<"Nombre empleado: "<<Orden.getNombreEmpleado()<<std::endl;
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
            }
        }

    }
    Archivo.close();
}

void FuncionesOrdenesDeCompra::Modificar() {
    std::cout<<"INGRESE CODIGO DE LA ORDEN: ";
    std::cin.getline(CodigoOrden,20);
    std::ifstream Archivo("Ordenes.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR.";
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&Orden, sizeof(Orden));
            std::ofstream Temp("Temporal.txt",std::ios::app);
            if(!strcmp(Orden.getCodigoEmpleado(), CodigoOrden)){
                if (Archivo.eof())break;
                std::cout<<"INGRESE CODIGO DE LA ORDEN: ";
                std::cin.getline(CodigoOrden,20);
                std::cout<<"INGRESE CODIGO DEL PRODUCTO: ";
                std::cin.getline(CodigoProducto,20);
                std::cout<<"INGRESE CANTIDAD DEL PRODUCTO: ";
                std::cin>>CantidadProducto;
                std::cin.ignore();
                std::cout<<"INGRESE PRECIO DEL PRODUCTO: ";
                std::cin>>PrecioProducto;
                std::cin.ignore();
                TotalProducto = CantidadProducto*PrecioProducto;

                std::cout<<"INGRESE CODIGO DEL CLIENTE: ";
                std::cin.getline(CodigoCliente,30);
                std::cout<<"INGRESE NOMBRE DEL CLIENTE: ";
                std::cin.getline(NombreCliente,30);

                std::cout<<"INGRESE CODIGO DEL EMPLEADO: ";
                std::cin.getline(CodigoEmpleado,30);
                std::cout<<"INGRESE NOMBRE DEL EMPLEADO: ";
                std::cin.getline(NombreEmpleado,30);

                Orden.setCodigoOrden(CodigoOrden);
                Orden.setCodigoProducto(CodigoProducto);
                Orden.setCantidadProducto(CantidadProducto);
                Orden.setPrecioProducto(PrecioProducto);
                Orden.setTotalProducto(TotalProducto);
                Orden.setCodigoCliente(CodigoCliente);
                Orden.setNombreCliente(NombreCliente);
                Orden.setCodigoEmpleado(CodigoEmpleado);
                Orden.setNombreEmpleado(NombreEmpleado);
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                Temp.write((char*)&Orden, sizeof(Orden));
            }else{
                if (Archivo.eof())break;
                Temp.write((char*)&Orden, sizeof(Orden));
            }
            Temp.close();
        }

    }
    Archivo.close();
    remove("Ordenes.txt");
    rename("Temporal.txt", "Ordenes.txt");
}

void FuncionesOrdenesDeCompra::Eliminar() {
    std::cout<<"INGRESE CODIGO DE LA ORDEN: ";
    std::cin.getline(CodigoOrden,20);
    std::ifstream Archivo("Ordenes.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR.";
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&Orden, sizeof(Orden));
            std::ofstream Temp("Temporal.txt",std::ios::app);
            if(!strcmp(Orden.getCodigoEmpleado(), CodigoOrden)){
                if (Archivo.eof())break;
            }else{
                if (Archivo.eof())break;
                Temp.write((char*)&Orden, sizeof(Orden));
            }
            Temp.close();
        }

    }
    Archivo.close();
    remove("Ordenes.txt");
    rename("Temporal.txt", "Ordenes.txt");
}
