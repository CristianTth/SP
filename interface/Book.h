#pragma once
#include <string.h>
#include <iostream>
#include <vector>
#include "../interface/author.h"

class Image
{
private:
    std::string imageName;
public:
    Image(std::string imageName);
    void print();
};


class Paragraph
{
private:
    std::string text;
public:
    Paragraph(std::string text);
    void print();
};


class Table
{
private:
    std::string title;
public:
    Table(std::string title);
    void print();
};


class SubChapter
{
private:
    std::string name;
    std::vector<Image> imageList;
    std::vector<Paragraph> paragraphList;
    std::vector<Table> tableList;
public:
    SubChapter(std::string name);
    int createNewImage(std::string imageName);
    int createNewParagraph(std::string paragraphText);
    int createNewTable(std::string tableTitle);
    void print();
};


class Chapter
{
private:
    std::string name;
    std::vector<SubChapter> subChapterList;
public:
    Chapter(std::string name);
    int createSubChapter(std::string subChapterName);
    SubChapter getSubChapter(int index);
    void print();
};


class Book
{
private:
    std::string title;
    std::vector<Chapter> chapterList;
    std::vector<Author> authorList;
public:
    Book(std::string title);
    int createChapter(std::string chapterName);
    Chapter getChapter(int index);
    void addAuthor(Author author);
    void print();
};
