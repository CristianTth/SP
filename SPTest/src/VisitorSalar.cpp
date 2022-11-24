#include "../interface/VisitorSalar.h"
int VisitorSalar::sumaProgramator = 0;
int VisitorSalar::sumaManager = 0;
int VisitorSalar::sumaTester = 0;
int VisitorSalar::sumaTotal = 0;

void VisitorSalar::visitFirma(Firma* firma)
{
    for(Element* departament: firma->departamente)
        this->visitDepartament(reinterpret_cast<Departament*>(departament));
}

void VisitorSalar::visitDepartament(Departament* departament)
{
    for(Element* departament: departament->subdepartamente)
        this->visitDepartament(reinterpret_cast<Departament*>(departament));

    for(Element* angajat: departament->angajati)
        this->visitAngajat(reinterpret_cast<Angajat*>(angajat));
}

void VisitorSalar::visitAngajat(Angajat* angajat)
{
    VisitorSalar::sumaTotal += angajat->salar;
    if(dynamic_cast<Manager*>(angajat))
        VisitorSalar::sumaManager+=angajat->salar;
    else if(dynamic_cast<Tester*>(angajat))
        VisitorSalar::sumaTester+=angajat->salar;
    else if(dynamic_cast<Programator*>(angajat))
        VisitorSalar::sumaProgramator+=angajat->salar;
}

void VisitorSalar::print()
{
    std::cout << "Suma manageri: " << this-> sumaManager << std::endl;
    std::cout << "Suma programatori: " << this -> sumaProgramator << std::endl;
    std::cout << "Suma testeri: " << this -> sumaTester << std::endl;
    std::cout << "Suma Totala: " << this-> sumaTotal << std::endl;
}