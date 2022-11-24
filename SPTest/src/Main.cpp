#include <iostream>
#include "../interface/VisitorSalar.h"

int main()
{
    Firma*  a = new Firma("Nokia");
    Departament* d = new Departament("5G");
    d->add(new Manager("Sefu", 10000));
    d->add(new Programator("Costel", 15000));
    d->add(new Tester("Ion", 4500));
    a->add(d);
    Visitor* calculSalar = new VisitorSalar();
    a->accept(calculSalar);
    calculSalar->print();
}