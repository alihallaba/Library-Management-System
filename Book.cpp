#include <iostream>
#include <string>
using namespace std;

class Book
{


public:
    int Bookid;
    string Bauth;
    string Btitle;
    int AorB;
    void Book{
        settitle(){
            cout<<"Enter book title: "<<endl;
            cin>>Btitle;
        }
        setauth(){
            cout<<"enter book's author: "<<endl;
            cin>>Btitle;
        }
        setid(){
            cout<<"enter book's id: :"<<endl;
        }

    }
    void binfo(){
        cout<<"Book's ID: "<<Bookid<<endl;
        cout<<"Book's Author: "<<Bauth<<endl;
        cout<<"Book's Title: "<<Btitle<<endl;
        if(AorB==1){
            cout<<"Book avaliable "<<endl;
        }
        else{
            cout<<"Book is borrowerd"<<endl;
        }
    }
    void bfield(int x){
        if(x==1){
            AorB=1;
        }
        if(x==0){
            AorB=0;
        }

    }
};
