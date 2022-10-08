#pragma once
#include <string.h>
#include <iostream>
#include <vector>
class Book
{
private:
    std::string title;
    std::vector<std::string> paragraphList;
    std::vector<std::string> imageList;
    std::vector<std::string> tableList;
public:
    Book(std::string title);
    void createNewParagraph(std::string paragraph);
    void createNewImage(std::string image);
    void createNewTable(std::string table);
    void print();
};
