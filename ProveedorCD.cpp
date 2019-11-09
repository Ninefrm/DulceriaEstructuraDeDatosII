//
// Created by Ninefrm on 09/11/2019.
//

#include "ProveedorCD.h"

void ProveedorCD::AgregarProveedor() {
    std::ofstream Write("Proveedor.txt", std::ios::app);
    std::cout << "Nombre empresa:" << std::endl;
    std::cin.getline(NombreEmpresa, 20);
    std::cout << "Teléfono:" << std::endl;
    std::cin.getline(Telefono, 15);
    std::cout << "Dirección:" << std::endl;
    std::cin.getline(Direccion, 30);
    std::cout << "Apellido representante:" << std::endl;
    std::cin.getline(Apellidos, 30);
    std::cout << "Nombre representante:" << std::endl;
    std::cin.getline(Nombre, 30);

    Write << NombreEmpresa << "#" << Telefono << "#" << Direccion << "#" << Apellidos << "#" << Nombre << "#" << '\n';
}

void ProveedorCD::ImprimirProveedores() {
    std::string Tmp;

    std::ifstream Read("Proveedor.txt");
    if (!Read.good()) std::cout << "Error";
    else
        std::cout << "Nombre Proveedor		" << "Telefono		" << "Dirección		" << "Apellidos		" << "Nombre	" << std::endl;
    while (!Read.eof()) {
        getline(Read, Tmp, '#');
        strcpy(NombreEmpresa, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Telefono, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Direccion,  Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Apellidos, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Nombre, Tmp.c_str());
        getline(Read, Tmp, '\n');

        if (Read.eof())break;

            std::cout << NombreEmpresa << "		" << Telefono << "		" << Direccion << "		" << Apellidos << "		" << Nombre << std::endl;

    }Read.close();
}

void ProveedorCD::BuscarProveedores() {
    std::string Tmp;
    char wNombre[30];
    std::cout << "Proveedor a buscar: ";
    std::cin.getline(wNombre, 20);

    std::ifstream Read("Proveedor.txt");
    if (!Read.good()) std::cout << "Error";
    else

    while (!Read.eof()) {
        getline(Read, Tmp, '#');
        strcpy(NombreEmpresa, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Telefono, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Direccion, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Apellidos, Tmp.c_str());
        getline(Read, Tmp, '#');
        strcpy(Nombre, Tmp.c_str());
        getline(Read, Tmp, '\n');
        if (Read.eof())break;
        /*std::cout << wNombre;
        std::cout << NombreEmpresa;
        std::cout << strcmp(NombreEmpresa, wNombre);*/
        if (!strcmp(NombreEmpresa,wNombre)){
            std::cout << "Nombre Proveedor	" << "Telefono	" << "Dirección	" << "Nombre	" << "Apellido	" << std::endl;
            std::cout << NombreEmpresa << "		" << Telefono << "		" << Direccion << "		" << Apellidos << "		" << Nombre << std::endl;
        }
    }Read.close();
}

void ProveedorCD::ModificarProveedores() {
    std::string Tmp;
    char wNombre[30];
    std::cout << "Proveedor a editar: ";
    std::cin.getline(wNombre, 20);
    int T = 1;
    int OP = 0;
    std::ifstream Read("Proveedor.txt");
    std::ofstream File("tmp.txt", std::ios::app);
    if (!Read.good()) std::cout << "Error";
    else

        while (!Read.eof()) {
            getline(Read, Tmp, '#');
            strcpy(NombreEmpresa, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Telefono, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Direccion, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Apellidos, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Nombre, Tmp.c_str());
            getline(Read, Tmp, '\n');
            /*std::cout << wNombre;
            std::cout << NombreEmpresa;
            std::cout << strcmp(NombreEmpresa, wNombre);*/
            if ( !strcmp(NombreEmpresa, wNombre)) {
                while (T) {
                    std::cout << "Editador:" << std::endl;
                    std::cout << "1.- Nombre Empresa." << std::endl;
                    std::cout << "2.- Telefono." << std::endl;
                    std::cout << "3.- Direccion." << std::endl;
                    std::cout << "4.- Apellidos.:" << std::endl;
                    std::cout << "5.- Nombre.:" << std::endl;
                    std::cout << "6.- Salir" << std::endl;

                    std::cin >> OP;
                    std::cin.ignore();
                    switch (OP)
                    {
                        default:
                            T = 0;
                            break;
                        case 1:
                            std::cin.getline(NombreEmpresa, 20);
                            break;
                        case 2:
                            std::cin.getline(Telefono, 15);
                            break;
                        case 3:
                            std::cin.getline(Direccion, 30);
                            break;
                        case 4:
                            std::cin.getline(Apellidos, 30);
                            break;
                        case 5:
                            std::cin.getline(Nombre, 30);
                            break;

                    }
                }
            }
            File << NombreEmpresa << "#" << Telefono << "#" << Direccion << "#" << Apellidos << "#" << Nombre << "#" << '\n';
        }Read.close(); File.close();
    remove("Proveedor.txt");
    rename("tmp.txt", "Proveedor.txt");
}

void ProveedorCD::EliminarProveedor() {
    std::string Tmp;
    char wNombre[30];
    std::cout << "Proveedor a eliminar: ";
    std::cin.getline(wNombre, 20);
    int T = 1;
    int OP = 0;
    std::ifstream Read("Proveedor.txt");
    std::ofstream File("tmp.txt", std::ios::app);
    if (!Read.good()) std::cout << "Error";
    else

        while (!Read.eof()) {
            getline(Read, Tmp, '#');
            strcpy(NombreEmpresa, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Telefono, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Direccion, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Apellidos, Tmp.c_str());
            getline(Read, Tmp, '#');
            strcpy(Nombre, Tmp.c_str());
            getline(Read, Tmp, '\n');
            if (Read.eof())break;
//            std::cout << wNombre;
//            std::cout << NombreEmpresa;
//            std::cout << "Hola: " <<strcmp(NombreEmpresa, wNombre);
            if (strcmp(NombreEmpresa, wNombre)) {
                File << NombreEmpresa << "#" << Telefono << "#" << Direccion << "#" << Apellidos << "#" << Nombre << "#" << '\n';
            }
            if (!strcmp(NombreEmpresa, wNombre)){
                std::cout<<"ELIMINADO."<<std::endl;
            }
        }
    Read.close(); File.close();
    remove("Proveedor.txt");
    rename("tmp.txt", "Proveedor.txt");
}
