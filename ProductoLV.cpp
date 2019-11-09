//
// Created by Ninefrm on 09/11/2019.
//

#include "ProductoLV.h"


void Producto::Agregar() {
    std::cout<<"Nombre del producto: ";
    std::cin.getline(Nombre,20);
    std::cout<<"Codigo del producto: ";
    std::cin.getline(Codigo,10);
    std::cout<<"Descripción del producto: ";
    std::cin.getline(Descripcion,30);
    std::cout<<"Precio del producto: ";
    std::cin.getline(Precio,10);
    std::ofstream Archivo("Productos.txt",std::ios::app);
    //
    Buff = std::strlen(Codigo);
    Buff2 = std::strlen(Descripcion);
    Buff3 = std::strlen(Precio);
    BuffN = std::strlen(Nombre);
    //
    Archivo.write((char*)&BuffN,sizeof(int));
    Archivo.write((char*)&Nombre,BuffN);
    //
    Archivo.write((char*)&Buff,sizeof(int));
    Archivo.write((char*)&Codigo,Buff);
    //
    Archivo.write((char*)&Buff2,sizeof(int));
    Archivo.write((char*)&Descripcion,Buff2);
    //
    Archivo.write((char*)&Buff3,sizeof(int));
    Archivo.write((char*)&Precio,Buff3);
    //
    Archivo.close();
}

void Producto::Imprimir() {
    system("cls");
    std::ifstream Archivo("Productos.txt");
    if(!Archivo.good()){
        std::cout<<"No existe el archivo.";
    }
    else{
        while (!Archivo.eof()){
            Archivo.read((char*)&BuffN,sizeof(int));
            Archivo.read((char*)&Nombre,BuffN);
            Nombre[BuffN] = '\0';
            //
            Archivo.read((char*)&Buff,sizeof(int));
            Archivo.read((char*)&Codigo,Buff);
            Codigo[Buff] = '\0';
            //
            Archivo.read((char*)&Buff2,sizeof(int));
            Archivo.read((char*)&Descripcion,Buff2);
            Descripcion[Buff2] = '\0';
            //
            Archivo.read((char*)&Buff3,sizeof(int));
            Archivo.read((char*)&Precio,Buff3);
            Precio[Buff3] = '\0';
            //
            if (Archivo.eof())break;
            std::cout<<"-.-.-.-.-.-.-"<<std::endl;
            std::cout<<"Nombre: "<<Nombre<<"\nCodigo:"<<Codigo<<"\nDescripción: "<<Descripcion<<"\nPrecio: "<<Precio<<std::endl;
        }
    }
    Archivo.close();

}

void Producto::Buscar() {
    system("cls");
    char BuscarNombre[20];
    std::cin.getline(BuscarNombre,20);

    std::ifstream Archivo("Productos.txt");
    if(!Archivo.good()){
        std::cout<<"No existe el archivo.";
    }
    else{
        while (!Archivo.eof()){
            Archivo.read((char*)&BuffN,sizeof(int));
            Archivo.read((char*)&Nombre,BuffN);
            Nombre[BuffN] = '\0';
            //
            Archivo.read((char*)&Buff,sizeof(int));
            Archivo.read((char*)&Codigo,Buff);
            Codigo[Buff] = '\0';
            //
            Archivo.read((char*)&Buff2,sizeof(int));
            Archivo.read((char*)&Descripcion,Buff2);
            Descripcion[Buff2] = '\0';
            //
            Archivo.read((char*)&Buff3,sizeof(int));
            Archivo.read((char*)&Precio,Buff3);
            Precio[Buff3] = '\0';
            //
            if (Archivo.eof())break;
//            std::cout << !strcmp(Nombre, BuscarNombre);
            if(!strcmp(Nombre, BuscarNombre)){
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                std::cout<<"Nombre: "<<Nombre<<"\nCodigo:"<<Codigo<<"\nDescripción: "<<Descripcion<<"\nPrecio: "<<Precio<<std::endl;
            }
        }
    }
    Archivo.close();
}

void Producto::Modificar() {
    system("cls");
    char BuscarNombre[20];
    std::cout<<"Nombre del producto a buscar: ";
    std::cin.getline(BuscarNombre,20);

    std::ifstream Archivo("Productos.txt");
    if(!Archivo.good()){
        std::cout<<"No existe el archivo.";
    }
    else{
        while (!Archivo.eof()){
            Archivo.read((char*)&BuffN,sizeof(int));
            Archivo.read((char*)&Nombre,BuffN);
            Nombre[BuffN] = '\0';
            //
            Archivo.read((char*)&Buff,sizeof(int));
            Archivo.read((char*)&Codigo,Buff);
            Codigo[Buff] = '\0';
            //
            Archivo.read((char*)&Buff2,sizeof(int));
            Archivo.read((char*)&Descripcion,Buff2);
            Descripcion[Buff2] = '\0';
            //
            Archivo.read((char*)&Buff3,sizeof(int));
            Archivo.read((char*)&Precio,Buff3);
            Precio[Buff3] = '\0';
            //
            if (Archivo.eof())break;
//            std::cout << !strcmp(Nombre, BuscarNombre);
            if(!strcmp(Nombre, BuscarNombre)){
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                std::cout<<"Nombre: "<<Nombre<<"\nCodigo:"<<Codigo<<"\nDescripción: "<<Descripcion<<"\nPrecio: "<<Precio<<std::endl;
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                std::cout<<"¿Que deseas editar?."<<std::endl;
                std::cout<<"1.- Nombre."<<std::endl;
                std::cout<<"2.- Codigo."<<std::endl;
                std::cout<<"3.- Descripcion."<<std::endl;
                std::cout<<"4.- Precio."<<std::endl;
                std::cout<<"5.- Nada."<<std::endl;
                int Opcion;
                std::cout<<"Opción: ";
                std::cin>>Opcion;
                switch (Opcion)
                {
                    case 1:
                        std::cin.ignore();
                    std::cout<<"Nombre del producto: ";
                    std::cin.getline(Nombre,20);
                        break;
                    case 2:
                        std::cin.ignore();
                    std::cout<<"Codigo del producto: ";
                    std::cin.getline(Codigo,10);
                    break;
                    case 3:
                        std::cin.ignore();
                    std::cout<<"Descripción del producto: ";
                    std::cin.getline(Descripcion,30);
                    break;
                    case 4:
                        std::cin.ignore();
                    std::cout<<"Precio del producto: ";
                    std::cin.getline(Precio,10);
                    break;
                    default:
                        break;
                }

                std::ofstream CArchivo("CProductos.txt",std::ios::app);
                //
                Buff = std::strlen(Codigo);
                Buff2 = std::strlen(Descripcion);
                Buff3 = std::strlen(Precio);
                BuffN = std::strlen(Nombre);
                //
                CArchivo.write((char*)&BuffN,sizeof(int));
                CArchivo.write((char*)&Nombre,BuffN);
                //
                CArchivo.write((char*)&Buff,sizeof(int));
                CArchivo.write((char*)&Codigo,Buff);
                //
                CArchivo.write((char*)&Buff2,sizeof(int));
                CArchivo.write((char*)&Descripcion,Buff2);
                //
                CArchivo.write((char*)&Buff3,sizeof(int));
                CArchivo.write((char*)&Precio,Buff3);
                //
                CArchivo.close();
            }
        }
    }
    Archivo.close();
    remove("Productos.txt");
    rename("CProductos.txt", "Productos.txt");
}

void Producto::Eliminar() {
    system("cls");
    char BuscarNombre[20];
    std::cin.getline(BuscarNombre,20);

    std::ifstream Archivo("Productos.txt");
    if(!Archivo.good()){
        std::cout<<"No existe el archivo.";
    }
    else{
        while (!Archivo.eof()){
            Archivo.read((char*)&BuffN,sizeof(int));
            Archivo.read((char*)&Nombre,BuffN);
            Nombre[BuffN] = '\0';
            //
            Archivo.read((char*)&Buff,sizeof(int));
            Archivo.read((char*)&Codigo,Buff);
            Codigo[Buff] = '\0';
            //
            Archivo.read((char*)&Buff2,sizeof(int));
            Archivo.read((char*)&Descripcion,Buff2);
            Descripcion[Buff2] = '\0';
            //
            Archivo.read((char*)&Buff3,sizeof(int));
            Archivo.read((char*)&Precio,Buff3);
            Precio[Buff3] = '\0';
            //
            if (Archivo.eof())break;
//            std::cout << !strcmp(Nombre, BuscarNombre);
            if(!strcmp(Nombre, BuscarNombre)){
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                std::cout<<"Nombre: "<<Nombre<<"\nCodigo:"<<Codigo<<"\nDescripción: "<<Descripcion<<"\nPrecio: "<<Precio<<std::endl;
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
                std::cout<<"Eliminado"<<std::endl;
                std::cout<<"-.-.-.-.-.-.-"<<std::endl;
            }else{
                std::ofstream CArchivo("CProductos.txt",std::ios::app);
                //
                Buff = std::strlen(Codigo);
                Buff2 = std::strlen(Descripcion);
                Buff3 = std::strlen(Precio);
                BuffN = std::strlen(Nombre);
                //
                CArchivo.write((char*)&BuffN,sizeof(int));
                CArchivo.write((char*)&Nombre,BuffN);
                //
                CArchivo.write((char*)&Buff,sizeof(int));
                CArchivo.write((char*)&Codigo,Buff);
                //
                CArchivo.write((char*)&Buff2,sizeof(int));
                CArchivo.write((char*)&Descripcion,Buff2);
                //
                CArchivo.write((char*)&Buff3,sizeof(int));
                CArchivo.write((char*)&Precio,Buff3);
                //
                CArchivo.close();
            }
        }
    }
    Archivo.close();
    remove("Productos.txt");
    rename("CProductos.txt", "Productos.txt");
}
