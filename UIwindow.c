#define  _CRT_SECURE_NO_WARNINGS
#include "UIwindow.h"
#include <stdio.h>
#include <windows.h>


void openLoading() {
    printf("LOADING......");
    int i;
    for (i = 0; i <= 100; i++) {
        printf("\b\b\b\b%3d%%", i);
        Sleep(4);
    }
    Sleep(200);
    system("cls");
}


void head(){
    printf("##############################################################\n");
    printf("## x      x      x  xxxxx   xxxxxxx                         ##\n");
    printf("##  x     x     x     x        x                            ##\n");
    printf("##   x   x x   x      x        x                            ##\n");
    printf("##    x x   x x       x        x     Tool Kit               ##\n");
    printf("##     x     x      xxxxx      x     �人���̴�ѧ������     ##\n");
    printf("##############################################################\n");
    printf("         *** δ��װEdge��������޷�ʹ�ô˹��߰� ***              \n");
    printf("              ** ��Դ�����ӭʹ�ò�������� **              \n");
    printf("##############################################################\n");
}


//��ҳ�˵�
void homepage(){
    printf("--------------------------------------------------------------\n");
    printf("   �˵�:                                                      \n");
    printf("   -1- �ٶ�                                                   \n");
    printf("   -2- ����ƽ̨                                                \n");
    printf("   -3- �人���̴�ѧͳһ�ɷ�ƽ̨                                   \n");
    printf("   -4- �人���̴�ѧ�ۺϽ������ϵͳ                                \n");
    printf("   -5- �人���̴�ѧͳһ�����֤ƽ̨                                \n");
    printf("   -6- �ǻ��Ž�ƽ̨                                             \n");
    printf("   -7- ��ѧԺƽ̨                                              \n");
    printf("   -8- ��ʾ��ǰʱ��                                             \n");
    printf("   -9- ����ʱ����                                              \n");
    /*
    printf("                                                            ##\n");
    printf("     MENU ADD FORM                                          ##\n");
    printf("                                                            ##\n");
    printf("                                                            ##\n");
    */
    printf("   -555- �˵�                                                \n");
    printf("   -886- �˳�                                                \n");
    printf("   -666666- ��������µ�ַ                                     \n");
    printf("--------------------------------------------------------------\n");
}

void closeAll() {
    printf("CLOSING......");
    int i;
    for (i = 0; i <= 100; i++) {
        printf("\b\b\b\b%3d%%", i);
        Sleep(4);
    }
    Sleep(200);
}

