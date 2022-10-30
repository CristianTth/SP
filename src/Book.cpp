#include "../interface/Book.h"
Book::Book(std::string title)
{
    this->title = title;
}
void Book::print()
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author(s): ";
    for(Author author: authorList)
        author.print();
    std::cout << std::endl;
    for (Section* section: sectionList)
        section->print();
}
void Book::addContent(Section* section)
{
    sectionList.push_back(section);
}
void Book::addAuthor(Author author)
{
    authorList.push_back(author);
}
Section* Book::getSection(int index)
{
    return sectionList.at(index);
}


Section::Section(std::string title)
{
    this->title = title;
}
void Section::print()
{
    for(Element* element: elementList)
        element->print();
}
void Section::add(Element* element)
{
    elementList.push_back(element);
}
void Section::remove(Element* element)
{
    std::remove(elementList.begin(), elementList.end(), element);
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



Paragraph::Paragraph(std::string text)
{
    this->text = text;
}
void Paragraph::print()
{
    std::cout << "Paragraph: " << text << std::endl;
}



Table::Table(std::string title)
{
    this->title = title;
}
void Table::print()
{
    std::cout << "Table with Title: " << title << std::endl;
}


TableOfContents::TableOfContents(std::string title)
{
    this->title = title;
}
void TableOfContents::print()
{
    std::cout << "TableOfContents with Title: " << title << std::endl;
}
