//
// Created by bokket on 2020/10/13.
//

#ifndef C_STRING_H
#define C_STRING_H

/*
class A
{
public:
    A(const A & other);
};*/

class String {
public:
   // String();
    String(const char *s=NULL);
    String(const String & another);
    //String operator=(const String & another);
    String& operator=(const String & another);

    String operator+(const String & another);
    bool operator>(const String & another);
    bool operator<(const String & another);
    bool operator==(const String & another);
    char& operator[](int index);
    char at(int index);
    ~String();
    char* c_str();




private:
    char* _str;
};


#endif //C_STRING_H