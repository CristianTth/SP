#include <iostream>
#include "../interface/Book.h"
int main()
{
    // std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    // ImageProxy *img1 = new ImageProxy("Pamela Anderson");
    // ImageProxy *img2 = new ImageProxy("Kim Kardashian");
    // ImageProxy *img3 = new ImageProxy("Kirby Griffin");
    // Section *playboyS1 = new Section("Front Cover");
    // playboyS1->add(img1);
    // Section *playboyS2 = new Section("Summer Girls");
    // playboyS2->add(img2);
    // playboyS2->add(img3);
    // Book *playboy = new Book("Playboy");

    // playboy->add(playboyS1);
    // playboy->add(playboyS2);
    // std::cout << "Creation of the content took: " << (std::chrono::system_clock::now() - start).count()/1000000000.0 << "s" << std::endl;
    // start = std::chrono::system_clock::now();
    // playboyS1->print();
    // std::cout << "Printing of the section 1 took: " << (std::chrono::system_clock::now() - start).count()/1000000000.0 << "s" << std::endl;
    // start = std::chrono::system_clock::now();
    // playboyS1->print();
    // std::cout << "Printing again the section 1 took: " << (std::chrono::system_clock::now() - start).count()/1000000000.0 << "s" << std::endl;

    Section *cap1 = new Section("Capitolul 1");
    Paragraph *p1 = new Paragraph("Centered");
    cap1->add(p1);
    Paragraph *p2 = new Paragraph("Right Positioned");
    cap1->add(p2);
    Paragraph *p3 = new Paragraph("Left Positioned");
    cap1->add(p3);
    Paragraph *p4 = new Paragraph("Paragraph 4");
    cap1->add(p4);
    std::cout << "Printing without Alignment" << std::endl;
    cap1->print();
    p1->setAlignStrategy(new AlignCenter());
    p2->setAlignStrategy(new AlignRight(4));
    p3->setAlignStrategy(new AlignLeft(4));

    std::cout << "Printing without Alignment" << std::endl;
    cap1->print();
}