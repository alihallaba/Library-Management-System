#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Customer.h"
#include "Admin.h"
#include "User.h"

class Library : public Book, public Admin, public User, public Customer {
private:
    Customer ssam;
    Book sample;

public:
    Library();

    void addmin();
    void custprog();
    void showBooks();
};

#endif // LIBRARY_H

