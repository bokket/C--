//
// Created by bokket on 2020/10/26.
//

#include "Animal.cpp"
#include "Dog.cpp"
#include "Cat.cpp"

using namespace std;

int main()
{
   // Cat c;
    //Dog d;
   // Animal *pa=&c;
    //pa->voice();

    Animal *pa=new Dog;
    pa->voice();

    delete pa;
}
