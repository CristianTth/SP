#pragma once
#include <iostream>
#include "Visitor.h"

class VisitorSalar: public Visitor
{
    static int sumaProgramator, sumaTester, sumaManager, sumaTotal;
public:
    void visitFirma(Firma* firma);
    void visitDepartament(Departament* departament);
    void visitAngajat(Angajat* angajat);
    void print();
};