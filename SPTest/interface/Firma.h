#pragma once
#include <iostream>
#include <vector>
#include "Element.h"


class Angajat: public Element
{
public:
    std::string name;
    int salar;
    explicit Angajat(std::string name, int salar);
    void add(Element* element);
    void accept(Visitor* visitor);
};

class Manager: public Angajat{using Angajat::Angajat;};
class Programator: public Angajat{using Angajat::Angajat;};
class Tester: public Angajat{using Angajat::Angajat;};

class Departament: public Element
{
public:
    std::string name;
    std::vector<Element*> subdepartamente;
    std::vector<Angajat*> angajati;
    Departament(std::string name);
    void add(Angajat* angajat);
    void add(Element* element);
    void accept(Visitor* visitor);
};


class Firma: public Element
{
public:
    std::string name;
    std::vector<Element*> departamente;
    Firma(std::string name);
    void add(Element* element);
    void accept(Visitor* visitor);
};