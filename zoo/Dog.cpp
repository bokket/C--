//
// Created by bokket on 2020/10/26.
//

#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog()
{
    cout<<"Dog::Dog()"<<endl;
}
Dog::~Dog()
{
    cout<<"Dog::~Dog()"<<endl;
}

void Dog::voice()
{
    cout<<"wang wang wang"<<endl;
}