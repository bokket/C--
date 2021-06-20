//
// Created by bokket on 2020/10/26.
//

#include <iostream>
using namespace std;

class IReader
{
public:
    virtual string getContents()=0;
};


class Book: public IReader
{
public:
    string getContents()
    {
        return "cong qian you zuo shan";
    }
};


class Newspaper: public IReader
{
public:
    string getContents()
    {
        cout<<"tump"<<endl;
    }
};

class Ebook: public IReader
{
public:
    string getContents()
    {
        cout<<">>>????"<<endl;
    }
};


class Mother
{
public:
    void tellstory(IReader *pr)
    {
        cout<<pr->getContents()<<endl;
    }
};

int main()
{
    Mother m;
    Book b;
    Newspaper n;
    Ebook e;
    m.tellstory(&b);
    m.tellstory(&n);
    m.tellstory(&e);
}