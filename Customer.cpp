#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "book.h"
#include "user.h"

using namespace std;

class Customer : public User {
protected:
    Book Books[5];
    int CustID;
    string Custname;
    string Custpass;

public:
    void bbook() {
        cout << "Borrow book by" << endl << "1. Name" << endl << "2. ID" << endl;
        int boroww;
        cin >> boroww;

        if (boroww == 1) {
            string bname;
            cout << "Enter book name: " << endl;
            cin >> bname;
            for (int i = 0; i < 5; i++) {
                if (Books.
