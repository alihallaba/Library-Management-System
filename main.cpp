#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Book.h"
#include "Customer.h"
#include "Admin.h"
#include "User.h"
#include "Library.h"

using namespace std;

int main() {
    int firstch;
    int adminsnum = 0;
    cout << "Welcome to the Library" << endl;
    cout << "1. Admin" << endl << "2. Customer" << endl;
    cin >> firstch;

    if (firstch == 1) {
        Library Addm;
        Addm.addmin();
    }
    else if (firstch == 2) {
        Library cusst;
        cusst.custprog();
    }
    else {
        cout << "Wrong choice" << endl;
    }

    return 0;
}
