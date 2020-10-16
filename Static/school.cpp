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
    static string &getLib()
    {
        tower="hahah";
        return lib;
    }
//public:
private:
    string tower;
    string lake;

    static string lib;
};

string School::lib;

int main()
{
    School::getLib()="jiuyin";
    School::getLib()+="+bokket";
   // School::lib+="+kangong";

    School cz,bn,blueshit;
    cz.getTower()="boytz";
    bn.getTower()="shuot";
    blueshit.getTower()="wajyet";

    cz.getLib()+="+ssss";
    bn.getLib()+="+leave";
    blueshit.getLib()+="+>>>>";

    cout<<cz.getLib()<<endl;
    cout<<blueshit.getLib()<<endl;

    cout<<School::getLib()<<endl;
}