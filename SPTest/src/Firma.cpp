#include "../interface/Firma.h"

Firma::Firma(std::string name)
{
    this->name = name;
}
void Firma::add(Element* element)
{
    this->departamente.push_back(element);
}
void Firma::accept(Visitor* visitor)
{
    visitor->visitFirma(this);
}


Departament::Departament(std::string name)
{
    this->name = name;
}
void Departament::add(Element* element)
{
    this->subdepartamente.push_back(element);
}
void Departament::add(Angajat* angajat)
{
    this->angajati.push_back(angajat);
}
void Departament::accept(Visitor* visitor)
{
    visitor->visitDepartament(this);
}


Angajat::Angajat(std::string name, int salar)
{
    this->name = name;
    this->salar= salar;
}
void Angajat::add(Element* element){}
void Angajat::accept(Visitor* visitor)
{
    visitor->visitAngajat(this);
}