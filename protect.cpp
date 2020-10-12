#include <iostream>
using namespace std;

class person
{
    public:
        //公共权限
        string m_name;
    protected:
        //保护权限
        string m_car;
    private:

        int m_passwd;
    public:
        void func()
        {
            m_name="wxz";
            m_car="拖拉机";
            m_passwd=123;
        }
};
int main()
{
    person p1;
    p1.m_name="adl";
    p1.func();


}