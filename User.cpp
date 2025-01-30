#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    int id;
    string name;
    string password;
public:
    void setid(int x) {
        id = x;
    }

    void setname(string y) {
        name = y;
    }

    void setpassword(string z) {
        password = z;
    }

    int getid() {
        return id;
    }

    string getname() {
        return name;
    }

    string getpassword() {
        return password;
    }
};
