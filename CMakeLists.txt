cmake_minimum_required(VERSION 3.15)
project(DulceriaEstructuraDeDatosII)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DulceriaEstructuraDeDatosII
    main.cpp ProductoLV.cpp ProductoLV.h ProveedorCD.cpp ProveedorCD.h OrdenesDeCompraLF.cpp OrdenesDeCompraLF.h FuncionesOrdenesDeCompra.cpp FuncionesOrdenesDeCompra.h Prueba.cpp Cliente.cpp Cliente.h Indices.cpp Indices.h IndizacionCliente.cpp IndizacionCliente.h)
