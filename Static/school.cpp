//
// Created by bokket on 2020/10/16.
//

#include <iostream>
using namespace std;
class School
{
public:
    string &getTower()
    {
        return tower;
    }
    string &get
//public:
private:
    string tower;
    string lake;

    static string lib;
};

string School::lib;

int main()
{
    School::lib="jiuyin";
    School::lib+="+bokket";
   // School::lib+="+kangong";

    School cz,bn,blueshit;
    cz.getTower()="boytz";
    bn.getTower()="shuot";
    blueshit.getTower()="wajyet";

    cz.lib+="+ssss";
    bn.lib+="+leave";
    blueshit.lib+="+>>>>";

    cout<<cz.lib<<endl;
}