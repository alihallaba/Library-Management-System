#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Customer.h"
#include "Book.h"
#include "User.h"

class Admin : public User {
protected:
    int adminid;
    std::string adminname;
    std::string adminpass;

public:
    void idgenerate();
    void adname();
    void adpass();
    void Adminsetters();
    void addbook();
    void removebook();
    void showusers();
    void removeuser();
};

#endif // ADMIN_H
