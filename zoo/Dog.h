//
// Created by bokket on 2020/10/26.
//

#ifndef C_DOG_H
#define C_DOG_H

class Animal;

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();

    virtual void voice();
};


#endif //C_DOG_H
