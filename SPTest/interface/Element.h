#pragma once
#include <iostream>
#include <vector>
#include "Visitor.h"

class Visitor;

class Element
{
public:
    std::vector<Element*> angajati;
    virtual void add(Element* element) = 0;
    virtual void accept(Visitor* visitor) = 0;
};