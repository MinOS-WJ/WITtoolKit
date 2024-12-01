#define  _CRT_SECURE_NO_WARNINGS
#include "timeFunction.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>

//显示15秒的当前时间
void nowTime(){
    int s=0;
    while(s<=60){
        time_t timep;
        time(&timep);
        struct tm *p = gmtime(&timep);
        printf("%4d/%02d/%02d", (1900+p->tm_year), (1+p->tm_mon), p->tm_mday);
        printf(" %02d:%02d:%02d\r", (8+p->tm_hour), p->tm_min, p->tm_sec);//中国东八区，比世界时间早8小时
        Sleep(250);
        s+=1;
    }
    printf("\n");
}

//倒计时工具
void countDown() {
    int hour = 0, min = 0, sec = 0;
    time_t time_sec = 0;
    time_t old_sec = 0;
    printf("请设置计时时间:?时?分?秒\n");
    scanf("%d%d%d", &hour, &min, &sec);
    time(&time_sec);              //获取当前秒数（1970-1-1 00:00:00到现在）
    printf("倒计时--%02d:%02d:%02d\r", hour, min, sec);
    old_sec = time_sec;           //更新旧的秒数
    while(hour > 0 || min > 0 || sec > 0)
    {
        time(&time_sec);          //获取秒数保存到time_t变量
        if(time_sec != old_sec)   //如果秒数改变（计时达到1秒）
        {
            old_sec = time_sec;   //更新旧的秒数
            if(sec > 0)
                sec--;            //计时秒数减1
            else
            {
                sec = 59;         //如果原秒数为0，则变为59
                if(min > 0)
                    min--;        //计时分钟减1
                else
                {
                    min = 59;     //如果分钟数为0，则变为59
                    hour--;       //计时小时数减1
                }
            }
            printf("倒计时--%02d:%02d:%02d\r", hour, min, sec);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("\a");             //响蜂鸣器（或系统提示音）
        Sleep(1);                 //延时1秒，太短电脑不发出声音
    }
    puts("\n计时结束\n");
}


/////////////////////////////////////////