#define  _CRT_SECURE_NO_WARNINGS
#include "timeFunction.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>

//��ʾ15��ĵ�ǰʱ��
void nowTime(){
    int s=0;
    while(s<=60){
        time_t timep;
        time(&timep);
        struct tm *p = gmtime(&timep);
        printf("%4d/%02d/%02d", (1900+p->tm_year), (1+p->tm_mon), p->tm_mday);
        printf(" %02d:%02d:%02d\r", (8+p->tm_hour), p->tm_min, p->tm_sec);//�й���������������ʱ����8Сʱ
        Sleep(250);
        s+=1;
    }
    printf("\n");
}

//����ʱ����
void countDown() {
    int hour = 0, min = 0, sec = 0;
    time_t time_sec = 0;
    time_t old_sec = 0;
    printf("�����ü�ʱʱ��:?ʱ?��?��\n");
    scanf("%d%d%d", &hour, &min, &sec);
    time(&time_sec);              //��ȡ��ǰ������1970-1-1 00:00:00�����ڣ�
    printf("����ʱ--%02d:%02d:%02d\r", hour, min, sec);
    old_sec = time_sec;           //���¾ɵ�����
    while(hour > 0 || min > 0 || sec > 0)
    {
        time(&time_sec);          //��ȡ�������浽time_t����
        if(time_sec != old_sec)   //��������ı䣨��ʱ�ﵽ1�룩
        {
            old_sec = time_sec;   //���¾ɵ�����
            if(sec > 0)
                sec--;            //��ʱ������1
            else
            {
                sec = 59;         //���ԭ����Ϊ0�����Ϊ59
                if(min > 0)
                    min--;        //��ʱ���Ӽ�1
                else
                {
                    min = 59;     //���������Ϊ0�����Ϊ59
                    hour--;       //��ʱСʱ����1
                }
            }
            printf("����ʱ--%02d:%02d:%02d\r", hour, min, sec);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("\a");             //�����������ϵͳ��ʾ����
        Sleep(1);                 //��ʱ1�룬̫�̵��Բ���������
    }
    puts("\n��ʱ����\n");
}


/////////////////////////////////////////