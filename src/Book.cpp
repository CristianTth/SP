#include "../interface/Book.h"

Book::Book(std::string title) : Section(title){}
void Book::print()
{
    std::cout << "Book: " << title << std::endl;
    std::cout << "Author(s): " << std::endl;
    for(Author* author: authorList)
        author->print();
    std::cout << std::endl;
    Section::print();
}
void Book::addAuthor(Author* author)
{
    authorList.push_back(author);
}


Section::Section(std::string title)
{
    this->title = title;
}
void Section::print()
{
    std::cout << title << std::endl;
    for(Element* element: elementList)
        element->print();
}
void Section::add(Element* element)
{
    elementList.push_back(element);
}
void Section::remove(Element* element)
{
    elementList.erase(std::remove(elementList.begin(), elementList.end(), element), elementList.end());
}
Element* Section::get(int index)
{
    return elementList.at(index);
}


Image::Image(std::string imageName)
{
    this->imageName = imageName;
}
void Image::print()
{
    std::cout << "Image with name: " << imageName << std::endl;
}
void Image::add(Element* element){};
void Image::remove(Element* element){};
Element* Image::get(int index){return nullptr;};



Paragraph::Paragraph(std::string text)
{
    this->text = text;
}
void Paragraph::print()
{
    std::cout << "Paragraph: " << text << std::endl;
}
void Paragraph::add(Element* element){};
void Paragraph::remove(Element* element){};
Element* Paragraph::get(int index){return nullptr;};



Table::Table(std::string title)
{
    this->title = title;
}
void Table::print()
{
    std::cout << "Table with Title: " << title << std::endl;
}
void Table::add(Element* element){};
void Table::remove(Element* element){};
Element* Table::get(int index){return nullptr;};


TableOfContents::TableOfContents(std::string title)
{
    this->title = title;
}
void TableOfContents::print()
{
    std::cout << "TableOfContents with Title: " << title << std::endl;
}
void TableOfContents::add(Element* element){};
void TableOfContents::remove(Element* element){};
Element* TableOfContents::get(int index){return nullptr;};
