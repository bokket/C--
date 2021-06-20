//
// Created by bokket on 2020/10/26.
//

#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
    cout<<"Cat::Cat()"<<endl;
}
Cat::~Cat()
{
    cout<<"Cat::~Cat()"<<endl;

}
void Cat::voice()
{
    cout<<"miao miao miao"<<endl;
}