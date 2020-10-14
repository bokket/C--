//
// Created by bokket on 2020/10/13.
//

#include "String.h"
#include <string.h>

/*
String::String()
{
    _str=new char[1];
    *_str='\0';
}*/
String::String(const char *s)
{
    if(s==NULL)
    {
        _str=new char[1];
        *_str='\0';
    }
    else
    {
        int len;
        len=strlen(s);
        _str=new char[len+1];
        strcpy(_str,s);
    }
}
char* String::c_str()
{
    return _str;
}
String::~String()
{
    delete []_str;
}

String::String(const String & another)
{
    //同类之间无隐私
   int len=strlen(another._str);
    _str=new char[len+1];
    strcpy(_str,another._str);
    //_str=another._str;
}
String& String::operator=(const String & another)
{
    if(this==&another)
        return *this;
    //先删除自己
    delete []this->c_str();
    int len=strlen(another._str);
    this->_str=new char [len+1];
    strcpy(this->_str,another._str);

    return *this;
}
String String::operator+(const String & another)
{
    String tmp;
    //char *="abcd efg";
    // *this char*="abcd"
    // another char* ="efg"
    delete []tmp._str;
    int len=strlen(this->_str);
    len+=strlen(another._str);

    tmp._str=new char[len+1];//'\0abc\0efg\0'
    //*(tmp._str)='a';
    //*(tmp._str+1)='b';
    //*(tmp._str+2)='\0';
    //memset(tmp,0,len+1);

    strcat(tmp._str,this->_str);
    strcat(tmp._str,another._str);

    return tmp;
}

bool String::operator>(const String & another)
{
    if(strcmp(this->_str,another._str)>0)
        return true;
    else
        return false;
}
bool String::operator<(const String & another)
{
    if(strcmp(this->_str,another._str)<0)
        return true;
    else
        return false;
}
bool String::operator==(const String & another)
{
    if(strcmp(this->_str,another._str)==0)
        return true;
    else
        return false;
}
char& String::operator[](int index)
{
    return this->_str[index];
}
char String::at(int index)
{
    return this->_str[index];
}