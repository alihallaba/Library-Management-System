#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Customer.h"
#include "book.h"
#include "user.h"
using namespace std;
 class Admin : User
 {
 protected:
    int adminid;
    string adminname;
    string adminpass;
 public:
    void idgenerate(){
        int randomNumber = rand() % 100 + 1;
        adminid=randomNumber
    }
    void adname(){
        cout<<"please enter name:"<<endl;
        cin>>adminname
    }
    void adpass{
        cout<<"please enter password:"<<endl;
        cin>>adminpass
    }
    void Adminsetters(){
        setid(adminid);
        setname(adminname);
        setpassword(adminpass);}
    void addbook(){}
    void removebook(){}
    void showusers(){}
    void removeuser(){}


 };
