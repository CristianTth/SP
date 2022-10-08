#pragma once
#include <string.h>
#include <iostream>
#include <vector>
class Book
{
private:
    std::string title;
    std::vector<std::string> paragraphs;
    std::vector<std::string> images;
    std::vector<std::string> tables;
public:
    Book(std::string title);
    void createNewParagraph(std::string paragraph);
    void createNewImage(std::string image);
    void createNewTable(std::string table);
    void print();
};
