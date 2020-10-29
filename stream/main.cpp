//
// Created by bokket on 2020/10/29.
//

#include <iostream>
#include <fstream>
using namespace std;

class Mystream
{
public:
    Mystream(char *path,char* mode)
    {
        fp=fopen(path,mode);
    }
    char get()
    {
        return fgetc(fp);
    }
    void put(char ch)
    {
        fputc(ch,fp);
    }
    void seek(int offset,int where)
    {
        fseek(fp,offset,where);
    }
private:
    FILE* fp;
};

int main()
{
    //fstream fs;
    //fstream fs2(fs);
   // cout<<"ssafsd";

    /*fstream fs("abc.txt",ios::in|ios::out|ios::trunc);

    fs<<1<<" "<<2<<" "<<3<<endl; // fs.operator << ()

    int x,y,z;
    fs>>x>>y>>z;//fs.operator >> ()
    fs>>fseeko(0,ios::beg);


    cout<<x<<y<<z<<endl;*/

    fstream fs("abc.txt",ios::in|ios::out|ios::trunc);

    fs.put('b');
    fs.seekg(0,ios::beg);
    char ch;
    ch=fs.get();
    cout<<ch<<endl;


    Mystream ms("cba.txt","w+");
    ms.put('m');
    ms.seek(0,SEEK_SET);

    char ch1;
    ch1=ms.get();
    cout<<ch1<<endl;
    /*int a;
    cin>>a;
    cout<<a;*/
}