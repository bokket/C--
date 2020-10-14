//
// Created by bokket on 2020/10/14.
//

#ifndef C_CLOCK_H
#define C_CLOCK_H
#include <iostream>
#include <iomanip>
#include <time.h>
#include <unistd.h>
using namespace std;

class Clock {
public:
    Clock()
    {
        time_t t=time(NULL);//返回time_t
        struct tm ti=*localtime(&t);//extern struct tm *localtime (const time_t *__timer);
        hour=ti.tm_hour;
        min=ti.tm_min;
        sec=ti.tm_sec;
    }
    void run()
    {
        while(1)
        {
            //system("clear");
            //sleep(1);
            show();//完成显示
            tick();//完成数据更新
        }
    }
private:

    void show()
    {
        system("clear");
        cout<<setw(2)<<setfill('0')<<hour<<":";
        cout<<setw(2)<<setfill('0')<<min<<":";
        cout<<setw(2)<<setfill('0')<<sec<<":";
    }
    void tick()
    {
        usleep(1);
        if(++sec==60)
        {
            sec=0;
            min+=1;
            if(++min==60)
            {
                min=0;
                hour+=1;
                if(hour==24)
                {
                    hour=0;
                }
            }
        }
    }
    int hour;
    int min;
    int sec;
};



#endif //C_CLOCK_H
