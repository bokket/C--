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