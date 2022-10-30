#pragma once
#include <string.h>
#include <iostream>
#include <vector>
#include "../interface/author.h"

class Element
{
public:
    virtual void print() = 0;
    virtual void add() = 0;
    virtual void remove() = 0;
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
    std::string title;
    std::vector<Element*> elementList;
public:
    Section(std::string title);
    void print();
    void add(Element* element);
    void remove(Element* element);
    Element* get(int index);
};


class Book
{
private:
    std::string title;
    std::vector<Section*> sectionList;
    std::vector<Author> authorList;
public:
    Book(std::string title);
    void addContent(Section* section);
    Section* getSection(int index);
    void addAuthor(Author author);
    void print();
};
