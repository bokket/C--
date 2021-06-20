//
// Created by bokket on 2020/10/26.
//

#ifndef C_CAT_H
#define C_CAT_H

class Animal;
class Cat: public Animal {
public:
    Cat();

    virtual ~Cat();

    virtual void voice();
};

#endif //C_CAT_H
