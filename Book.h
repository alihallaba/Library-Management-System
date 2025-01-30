#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
public:
    int Bookid;
    std::string Bauth;
    std::string Btitle;
    int AorB;

    void settitle();
    void setauth();
    void setid();
    void binfo();
    void bfield(int x);
};

#endif // BOOK_H
