#pragma once
#include <iostream>
#include "Firma.h"

class Firma;
class Departament;
class Angajat;

class Visitor
{
public:
    virtual void visitFirma(Firma* firma) = 0;
    virtual void visitDepartament(Departament* departament) = 0;
    virtual void visitAngajat(Angajat* angajat) = 0;
    virtual void print() = 0;
};