//
// Created by bokket on 2020/10/26.
//

#ifndef C_ANIMAL_H
#define C_ANIMAL_H


class Animal
{
public:
    Animal();
    virtual ~Animal();

    virtual void voice()=0;
};


#endif //C_ANIMAL_H
