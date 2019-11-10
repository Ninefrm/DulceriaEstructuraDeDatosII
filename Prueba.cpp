////
//// Created by Ninefrm on 09/11/2019.
////
//
//#include <iostream>
//#include <fstream>
//#include <string.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <vector>
//
//using namespace std;
//int orden=0;
//
//class ICCliente
//{
//public:
//    char rfc[14], nombre[35], direccion[40],colonia[20],ciudad[20],estado[20];
//    int limite,saldo,dias,cp;
//
//    void capturar();
//    void buscar();
//    void mostrar();
//    void Modificar();
//    void Eliminar();
//    void Mostrar_Indice();
//    void Orden();
//}x;
//
//class Indice
//{
//public:
//    char rfc[14];
//    long int pos;
//
//}y;
//
//void ICCliente::mostrar()
//{
//    ifstream a("datos.txt");
//    if(!a.good())
//        cout<<"No existe el archivo";
//    else
//    {
//        while(!a.eof())
//        {
//            a.read((char*)&x,sizeof(x));
//            if(a.eof())
//                break;
//            cout<<"RFC:"<<x.rfc<<endl<<"Nombre: "<<x.nombre<<endl<<"Direccion: "<<x.direccion<<endl<<"Colonia:"<<x.colonia<<endl<<"Ciudad:"<<x.ciudad<<endl<<"Estado:"<<estado<<endl<<"CP:"<<cp<<endl<<"Limite de Credito:"<<limite<<endl<<"Saldo:"<<x.saldo<<endl<<"Dias de credito:"<<x.dias<<endl;
//        }
//    }
//    a.close();
//}
//
//void ICCliente::Mostrar_Indice()
//{
//    ifstream a("indice.txt");
//    if(!a.good())
//        cout<<"No existe el archivo";
//    else
//    {
//        while(!a.eof())
//        {
//            a.read((char*)&y,sizeof(y));
//            if(a.eof())
//                break;
//            cout<<"RFC:"<<y.rfc<<endl<<endl;
//        }
//    }
//    a.close();
//}
//
//
//
//
//void ICCliente::capturar()
//{
//    fflush(stdin);
//    cout<<"RFC:"<<endl;
//    cin.getline(rfc,14);
//    cout<<"Dame el nombre del cliente"<<endl;
//    cin.getline(nombre,35);
//    cout<<"Dame la direccion "<<endl;
//    cin.getline(direccion,40);
//    cout<<"Dame el colonia"<<endl;
//    cin.getline(colonia,20);
//    cout<<"Dame el ciudad"<<endl;
//    cin.getline(ciudad,20);
//    fflush(stdin);
//    cout<<"Dame el estado"<<endl;
//    cin.getline(estado,20);
//    cout<<"Dame el CP"<<endl;
//    cin>>cp;
//    cout<<"Dame el limite de credito"<<endl;
//    cin>>limite;
//    cout<<"Dame el saldo"<<endl;
//    cin>>saldo;
//    cout<<"Dame el CP"<<endl;
//    cin>>dias;
//    ofstream a("datos.txt",ios::app);
//    a.write((char*)&x,sizeof(x));
//    y.pos=a.tellp();
//    y.pos-=sizeof(x);
//    a.close();
//    strcpy(y.rfc,rfc);
//    ofstream b("indice.txt",ios::app);
//    b.write((char*)&y,sizeof(y));
//    b.close();
//    orden++;
//}
//
//void ICCliente::buscar()
//{
//    char rfcbus[14];
//    int band=0;
//    //cout<<"posicion "<<y.pos;
//    ifstream b("indice.txt");
//    if(!b.good()){
//        cout<<"No existe el archivo";}
//    else{
//        cout<<"\nRFC a buscar!"<<endl;
//        fflush(stdin);cin.getline(rfcbus,14);
//        while(!b.eof())
//        {
//            b.read((char*)&y,sizeof(y));
//            if(b.eof())
//            {
//                break;
//            }
//            if(strcmp(y.rfc,rfcbus)==0)
//            {
//                ifstream a("datos.txt");
//                a.seekg(y.pos,ios::beg);
//                a.read((char*)&x,sizeof(x));
//                cout<<"RFC:"<<x.rfc<<endl<<"Nombre: "<<x.nombre<<endl<<"Direccion: "<<x.direccion<<endl<<"Colonia:"<<x.colonia<<endl<<"Ciudad:"<<x.ciudad<<endl<<"Estado:"<<estado<<endl<<"CP:"<<cp<<endl<<"Limite de Credito:"<<limite<<endl<<"Saldo:"<<x.saldo<<endl<<"Dias de credito:"<<x.dias<<endl;
//                a.close();
//                band=1;
//                break;
//            }
//        }
//        if(band==0)
//        {
//            cout<<"\n NO EXISTE REGISTRO....."   ;
//        }
//    }
//    b.close();
//
//}
//
//void ICCliente::Modificar()
//{
//    char rfcmod[15];
//    int band=0;
//    int opc;
//    ifstream b("indice.txt");
//    if(!b.good()){
//        cout<<"No existe el archivo";}
//    else{
//        cout<<"\nRFC a modificar!"<<endl;
//        fflush(stdin);cin.getline(rfcmod,14);
//        while(!b.eof())
//        {   opc=0;
//            b.read((char*)&y,sizeof(y));
//            if(b.eof())
//            {
//                break;
//            }
//            if(strcmp(y.rfc,rfcmod)==0 && band==0)
//            {
//                ifstream a("datos.txt");
//                a.seekg(y.pos,ios::beg);
//
//                a.read((char*)&x,sizeof(x));
//                if(a.eof())   break;
//                cout<<"RFC:"<<x.rfc<<endl<<"Nombre: "<<x.nombre<<endl<<"Direccion: "<<x.direccion<<endl<<"Colonia:"<<x.colonia<<endl<<"Ciudad:"<<x.ciudad<<endl<<"Estado:"<<estado<<endl<<"CP:"<<cp<<endl<<"Limite de Credito:"<<limite<<endl<<"Saldo:"<<x.saldo<<endl<<"Dias de credito:"<<x.dias<<endl;
//                cout<<"Deseas modificarlo\n"<<"1.-Si   2.-No"; cin>>opc;
//                band=1;
//                a.close();
//                break;
//            }//if de comparacion
//        }//while
//        b.close();
//        if(opc==1)
//        {
//            fflush(stdin);
//            ifstream indice("indice.txt");
//            ifstream datos("datos.txt");
//            while(!indice.eof())
//            {cout<<"entro al ciclo\n";
//                indice.read((char*)&y,sizeof(y));
//                cout<<"\nrfc:"<<y.rfc<<"\n";
//                datos.read((char*)&x,sizeof(x));
//                if(indice.eof())
//                {
//                    break;
//                }
//                if(strcmp(y.rfc,rfcmod)==0)
//                {
//                    cout<<"RFC:"<<endl;
//                    cin.getline(rfc,14);
//                    cout<<"Dame el nombre del cliente"<<endl;
//                    cin.getline(nombre,35);
//                    cout<<"Dame la direccion "<<endl;
//                    cin.getline(direccion,40);
//                    cout<<"Dame el colonia"<<endl;
//                    cin.getline(colonia,20);
//                    cout<<"Dame el ciudad"<<endl;
//                    cin.getline(ciudad,20);
//                    fflush(stdin);
//                    cout<<"Dame el estado"<<endl;
//                    cin.getline(estado,20);
//                    cout<<"Dame el CP"<<endl;
//                    cin>>cp;
//                    cout<<"Dame el limite de credito"<<endl;
//                    cin>>limite;
//                    cout<<"Dame el saldo"<<endl;
//                    cin>>saldo;
//                    cout<<"Dame el CP"<<endl;
//                    cin>>dias;
//                }
//
//                ofstream c("temp.txt",ios::app);
//                c.write((char*)&x,sizeof(x));
//
//                strcpy(y.rfc,rfc);
//                ofstream d("tempind.txt",ios::app);
//                d.write((char*)&y,sizeof(y));
//                d.close();
//                c.close();
//
//            }//while archivo
//
//
//
//        }
//
//        if(band==0)
//        {cout<<"\n NO EXISTE REGISTRO....."   ;}
//
//    }//else
//
//
//    remove("indice.txt"); rename("tempind.txt","indice.txt");
//    remove("datos.txt");  rename("temp.txt","datos.txt");
//
//
//}
//
//void ICCliente::Eliminar()
//{
//    char rfceli[15];
//    int band=0;
//    int opc,cont=0,cont2=0;
//    ifstream b("indice.txt");
//    if(!b.good()){
//        cout<<"No existe el archivo";}
//    else{
//        cout<<"\nRFC a eliminar!"<<endl;
//        fflush(stdin);cin.getline(rfceli,14);
//        while(!b.eof())
//        {
//            b.read((char*)&y,sizeof(y));
//            cont++;
//            cout<<"contador --"<<cont;
//            if(b.eof())
//            {
//                break;
//            }
//            if(strcmp(y.rfc,rfceli)==0)
//            {
//                ifstream a("datos.txt");
//                a.seekg(y.pos,ios::beg);
//                a.read((char*)&x,sizeof(x));
//                if(a.eof())   break;
//
//                cout<<"RFC:"<<x.rfc<<endl<<"Nombre:"<<x.nombre<<endl<<"Direccion:"<<x.direccion<<endl<<"Colonia:"<<x.colonia<<endl<<"Ciudad:"<<x.ciudad<<endl<<"Estado:"<<estado<<endl<<"CP:"<<cp<<endl<<"Limite de Credito:"<<limite<<endl<<"Saldo:"<<x.saldo<<endl<<"Dias de credito:"<<x.dias<<endl;
//                cout<<"Deseas eliminar\n"<<"1.-Si   2.-No"; cin>>opc;
//                band=1;
//                a.close();
//                break;
//            }//if de comparacion
//
//        }//while
//        b.close();
//        cout<<"salio--";
//
//        if(opc==1)
//        {cout<<"entro al si\n";
//            ifstream indice("indice.txt");
//            ifstream datos("datos.txt");
//            while(!indice.eof())
//            {cout<<"entro al ciclo\n";
//                indice.read((char*)&y,sizeof(y));
//                cout<<"\nrfc:"<<y.rfc<<"\n";
//                datos.read((char*)&x,sizeof(x));
//                if(indice.eof())
//                {
//                    break;
//                }
//                if(strcmp(y.rfc,rfceli))
//                {cont2++; cout<<"contador de if es "<<cont2;
//
//
//                    cout<<"nombre escrito es "<<x.nombre;
//                    ofstream c("temp.txt",ios::app);
//                    c.write((char*)&x,sizeof(x));
//
//                    strcpy(y.rfc,rfc);
//                    ofstream d("tempind.txt",ios::app);
//                    d.write((char*)&y,sizeof(y));
//                    d.close();
//                    c.close();
//                }
//            }//while archivo
//            indice.close();
//            datos.close();
//            remove("indice.txt"); rename("tempind.txt","indice.txt");
//            remove("datos.txt");  rename("temp.txt","datos.txt");
//        }//if
//        else
//        {
//
//        }
//
//        if(band==0)
//        {cout<<"\n NO EXISTE REGISTRO....."   ;}
//
//    }//else
//
//
//}
//
//void ICCliente::Orden()
//{int i=0;
//    char indice[20][14];
//    char aux[20];
//
//    ifstream a("indice.txt");
//    if(!a.good())
//        cout<<"No existe el archivo";
//    else
//    {cout<<"else";
//        while(!a.eof())
//        {
//            a.read((char*)&y,sizeof(y));
//            if(a.eof())
//                break;
//
//            char *cadena=y.rfc;
//            strcpy(indice[i],cadena);
//
//            i++;
//        }
//    }
//    a.close();
//
//    for(int i=0;i<orden-1;i++)
//        for(int j=i+1;j<orden;j++)
//            if(strcmp(indice[i],indice[j])>0)
//            {
//                strcpy(aux,indice[j]);
//                strcpy(indice[j],indice[i]);
//                strcpy(indice[i],aux);
//                system("cls");}
//    for(int i=0;i<orden;i++)
//    {
//
//        strcpy(y.rfc,indice[i]);
//
//        ofstream a("tempind.txt",ios::app);
//        a.write((char*)&y,sizeof(y));
//        a.close();
//    }
//
//    remove("indice.txt");
//    rename("tempind.txt","indice.txt");
//
//}
//
//
//
//main()
//{
//    int opc;
//    do{
//        system("cls");
//        cout<<"Selecciona una de la siguientes opciones:"<<endl<<"1.-Capturar"<<endl<<"2.-Buscar"<<endl<<"3.-Mostrar todos"<<endl<<"4.-Modificar"<<endl<<"5.-Eliminar"<<endl<<"6.-Mostrar Indice"<<endl<<"7-.Ordenar Indice";
//        cin>>opc;
//        switch(opc)
//        {
//
//            case 1:
//                x.capturar();
//
//                break;
//
//            case 2:
//                x.buscar();
//
//                break;
//
//            case 3:
//                x.mostrar();
//                break;
//
//            case 4:
//                x.Modificar();
//
//
//                break;
//
//            case 5:
//                x.Eliminar();
//
//                break;
//
//            case 6:
//                x.Mostrar_Indice(); break;
//
//            case 7:x.Orden(); break;
//
//
//
//
//        }
//        getch();
//    }while(opc!=9);
//    return 0;
//}