//
// Created by Ninefrm on 09/11/2019.
//

#ifndef DULCERIAESTRUCTURADEDATOSII_INDICES_H
#define DULCERIAESTRUCTURADEDATOSII_INDICES_H
#include "iostream"
#include "fstream"
#include "cstring"
#include <string.h>

class Indices {
    private:
    char RFC[14];
    long int Pos=0;
    public:
    Indices(){
        std::memset(RFC,'\0',14);
    }
    void setRFC(char* X);
    void setPos(long int Pos);

    char* getRFC();
    long int getPos();
};


#endif //DULCERIAESTRUCTURADEDATOSII_INDICES_H
