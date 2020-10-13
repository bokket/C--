//
// Created by bokket on 2020/10/13.
//

#ifndef C_STRING_H
#define C_STRING_H


class String {
public:
   // String();
    String(const char *s=NULL);

    char* c_str();

    ~String();
private:
    char* _str;
};


#endif //C_STRING_H
