//
// Created by bokket on 2020/10/21.
//
#include <iostream>
#include <string>
using namespace std;

class Mail
{
    friend  class Sender;
public:
    Mail(string t,string c)
            :_title(t),_contents(c){}
private:
    string _title;
    string _contents;
};


class Sender
{
public:
    Sender(string addr)
        :_addr(addr){}


        Sender& operator<<(const Mail & mail)
        {
            cout<<mail._title<<endl;
            cout<<mail._contents<<endl;
            return *this;
        }
private:
    string _addr;
};

int main()
{
    Sender sender("bokket@qq.com");

    Mail mail("kaihui","wenti");
    Mail mail2("tongzhi","cexiao");


    sender<<mail<<mail2; //Sender.operator<<(mail);
}
