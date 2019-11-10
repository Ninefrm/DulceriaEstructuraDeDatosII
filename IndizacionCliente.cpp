//
// Created by Ninefrm on 09/11/2019.
//

#include "IndizacionCliente.h"

void IndizacionCliente::Agregar() {
    std::cout<<"INGRESA CODIGO DEL CLIENTE: ";
    std::cin.getline(CodigoCliente,30);
    std::cout<<"INGRESA NOMBRE DEL CLIENTE: ";
    std::cin.getline(NombreCliente,30);
    std::cout<<"INGRESA RFC DEL CLIENTE: ";
    std::cin.getline(RFC,14);
    std::cout<<"INGRESA DIRECCION DEL CLIENTE: ";
    std::cin.getline(Direccion,40);
    std::cout<<"INGRESA COLONIA DEL CLIENTE: ";
    std::cin.getline(Colonia,20);
    std::cout<<"INGRESA CIUDAD DEL CLIENTE: ";
    std::cin.getline(Ciudad,20);
    std::cout<<"INGRESA ESTADO DEL CLIENTE: ";
    std::cin.getline(Estado,20);

    ICCliente.setCodigoCliente(CodigoCliente);
    ICCliente.setNombreCliente(NombreCliente);
    ICCliente.setRFC(RFC);
    Indice.setRFC(ICCliente.getRFC());
    ICCliente.setDireccion(Direccion);
    ICCliente.setColonia(Colonia);
    ICCliente.setCiudad(Ciudad);
    ICCliente.setEstado(Estado);

    std::ofstream Archivo("ICCliente.txt",std::ios::app);
    Archivo.write((char*)&ICCliente, sizeof(ICCliente));
    std::cout<<"TELLP"<<Archivo.tellp()<<std::endl;

    Archivo.seekp(0, std::ios::end);
    Pos = Archivo.tellp();
    std::cout << "CLIENTE SIZE OF: " << sizeof(ICCliente) << std::endl;
    Pos -= sizeof(ICCliente);
    std::cout<<"POS INDICE: "<<Pos<<std::endl;
    Indice.setPos(Pos);

//    Indice.setPos(sizeof(ICCliente)-Indice.getPos());
    Archivo.close();
    std::ofstream Indices("Indices.txt",std::ios::app);
    Indices.write((char*)&Indice,sizeof(Indice));
    Indices.close();
//    Orden++;
}

void IndizacionCliente::Imprimir_Clientes(){
    std::ifstream Archivo("ICCliente.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR. "<<std::endl;
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&ICCliente, sizeof(ICCliente));
            if(Archivo.eof()) break;
            std::cout << "Codigo ICCliente: " << ICCliente.getCodigoCliente() << std::endl;
            std::cout << "Nombre del ICCliente: " << ICCliente.getNombreCliente() << std::endl;
            std::cout << "RFC: " << ICCliente.getRFC() << std::endl;
            std::cout << "Dirección: " << ICCliente.getDireccion() << std::endl;
            std::cout << "Colonia: " << ICCliente.getColonia() << std::endl;
            std::cout << "Ciudad: " << ICCliente.getCiudad() << std::endl;
            std::cout << "Estado: " << ICCliente.getEstado() << std::endl;

        }
    }
    Archivo.close();
}

void IndizacionCliente::Imprimir_Indices() {
    std::ifstream Archivo("Indices.txt");
    if(!Archivo.good()){
        std::cout<<"ERROR. "<<std::endl;
    }else{
        while (!Archivo.eof()){
            Archivo.read((char*)&Indice,sizeof(Indice));
            if(Archivo.eof()) break;
            std::cout<<"RFC: "<<Indice.getRFC()<<std::endl;
            std::cout<<"POSICIÓN: "<<Indice.getPos()<<std::endl;
        }
    }
    Archivo.close();
}

void IndizacionCliente::Buscar() {
    Cliente BCliente;
//    int tamArchivo, numRegistros, contador(0);
    std::ifstream Indices("Indices.txt");
//    std::ifstream Clientes("ICCliente.txt");
//    Clientes.seekg(0, std::ios::end);
//    tamArchivo=Clientes.tellg();
//    Clientes.seekg(0, std::ios::beg);
//    numRegistros = tamArchivo/sizeof(ICCliente);
//    std::cout << "numR: " << numRegistros << std::endl;
//    std::cout << "tam: " << tamArchivo << std::endl;

    if(!Indices.good()){
        std::cout<<"ERROR BUSCAR."<<std::endl;
    }else{
        std::cout<<"INGRESA RFC DEL CLIENTE: ";

        std::cin.getline(RFC,14);
        //std::cin.ignore();
        std::cout<<RFC;
        while (!Indices.eof()){
            std::cout<<RFC;
            Indices.read((char*)&Indice,sizeof(Indice));
            std::cout << Indice.getPos() << std::endl;
            if(Indices.eof())break;
            std::cout<<RFC;
            std::cout<<Indice.getRFC();
            if(!strcmp(Indice.getRFC(), RFC)){
                std::ifstream Clientes("ICCliente.txt");
                std::cout << "\nPOS: "<<Indice.getPos() << std::endl;
                int Posicion = Indice.getPos();
                Clientes.seekg(Posicion,std::ios::beg);
                Clientes.read((char*)&BCliente, sizeof(BCliente));

                std::cout << "Codigo ICCliente: " << BCliente.getCodigoCliente() << std::endl;
                std::cout << "Nombre del ICCliente: " << BCliente.getNombreCliente() << std::endl;
                std::cout << "RFC: " << BCliente.getRFC() << std::endl;
                std::cout << "Dirección: " << BCliente.getDireccion() << std::endl;
                std::cout << "Colonia: " << BCliente.getColonia() << std::endl;
                std::cout << "Ciudad: " << BCliente.getCiudad() << std::endl;
                std::cout << "Estado: " << BCliente.getEstado() << std::endl;
                Clientes.close();
                break;
            }
//            contador++;
            //if(Indices.eof())break;
        }
    }
    Indices.close();
}
