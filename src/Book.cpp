#include "../interface/Book.h"
Book::Book(std::string title)
{
    this->title = title;
}
int Book::createChapter(std::string chapterName)
{
    chapterList.push_back(Chapter(chapterName));
    return chapterList.size() - 1;
}
void Book::print()
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author(s): ";
    for(Author author: authorList)
        author.print();
    std::cout << std::endl;
    for (Chapter chapter: chapterList)
        chapter.print();
}
Chapter Book::getChapter(int index)
{
    return chapterList.at(index);
}



Chapter::Chapter(std::string name)
{
    this->name = name;
}
int Chapter::createSubChapter(std::string subChapterName)
{
    subChapterList.push_back(SubChapter(subChapterName));
    return subChapterList.size() - 1;
}
void Book::addAuthor(Author author)
{
    authorList.push_back(author);
}
void Chapter::print()
{
    std::cout << "Chapter: " << name << std::endl;
    for (SubChapter subChapter: subChapterList)
        subChapter.print();
}
SubChapter Chapter::getSubChapter(int index)
{
    return subChapterList.at(index);
}


SubChapter::SubChapter(std::string name)
{
    this->name = name;
}
int SubChapter::createNewImage(std::string imageName)
{
    imageList.push_back(Image(imageName));
    return imageList.size() - 1;
}
int SubChapter::createNewParagraph(std::string paragraphText)
{
    paragraphList.push_back(Paragraph(paragraphText));
    return paragraphList.size() - 1;
}
int SubChapter::createNewTable(std::string tableTitle)
{
    tableList.push_back(Table(tableTitle));
    return tableList.size() - 1;
}
void SubChapter::print()
{
    std::cout << "SubChapter: " << name << std::endl;
    for(Paragraph paragraph: paragraphList)
        paragraph.print();
    for(Image image: imageList)
        image.print();
    for(Table table: tableList)
        table.print();
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
