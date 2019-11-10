//
// Created by Ninefrm on 09/11/2019.
//

#include "Indices.h"

void Indices::setRFC(char *X) {
    strcpy(RFC,X);
}

void Indices::setPos(long int Pos2) {
    Pos = Pos2;
}

char *Indices::getRFC() {
    return RFC;
}

long int Indices::getPos() {
    return Pos;
}
