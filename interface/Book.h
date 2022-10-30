#pragma once
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include "../interface/author.h"

class Element
{
public:
    virtual void print() = 0;
    virtual void add(Element*) = 0;
    virtual void remove(Element*) = 0;
    virtual Element* get(int index) = 0;
};


class Image : public Element
{
private:
    std::string imageName;
public:
    Image(std::string imageName);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class Paragraph : public Element
{
private:
    std::string text;
public:
    Paragraph(std::string text);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class Table : public Element
{
private:
    std::string title;
public:
    Table(std::string title);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class TableOfContents : public Element
{
private:
    std::string title;
public:
    TableOfContents(std::string title);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class Section : public Element
{
private:
    std::vector<Element*> elementList;
protected:
    std::string title;
public:
    Section(std::string title);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class Book : public Section
{
private:
    std::vector<Author*> authorList;
public:
    explicit Book(std::string title);
    void addAuthor(Author* author);
    void print();
};
