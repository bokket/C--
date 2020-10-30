//
// Created by bokket on 2020/10/30.
//

#include <iostream>
#include <fstream>

using namespace std;


class IOS
{
    enum {
        DEC=0000,HEX=0010,OCT=0100;
    };
};
int main()
{
    int a=0x12345678;
    /*cout<<unsetf(ios::dec);
    cout<<setf(ios::hex);


    cout<<a<<endl;
    cout.unsetf(ios::hex);

    cout<<setf(ios::oct);
    cout<<a<<endl;*/
    cout<<hex<<a<<endl;

    IOS::DEC | IOS::HEX
    0001
    0010
    0011
}