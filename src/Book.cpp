#include "../interface/Book.h"
Book::Book(std::string title)
{
    this->title = title;
}
void Book::createNewParagraph(std::string paragraph)
{
    paragraphList.push_back(paragraph);
}
void Book::createNewImage(std::string image)
{
    imageList.push_back(image);
}
void Book::createNewTable(std::string table)
{
    tableList.push_back(table);
}
void Book::print()
{
    for(std::string content : paragraphList)
    {
        std::cout << content << std::endl;
    }
    for(std::string content : imageList)
    {
        std::cout << content << std::endl;
    }
    for(std::string content : tableList)
    {
        std::cout << content << std::endl;
    }
}