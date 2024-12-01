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
    printf("##     x     x      xxxxx      x     武汉工程大学工具箱     ##\n");
    printf("##############################################################\n");
    printf("         *** 未安装Edge浏览器则无法使用此工具包 ***              \n");
    printf("              ** 开源软件欢迎使用并提出建议 **              \n");
    printf("##############################################################\n");
}


//主页菜单
void homepage(){
    printf("--------------------------------------------------------------\n");
    printf("   菜单:                                                      \n");
    printf("   -1- 百度                                                   \n");
    printf("   -2- 考试平台                                                \n");
    printf("   -3- 武汉工程大学统一缴费平台                                   \n");
    printf("   -4- 武汉工程大学综合教务管理系统                                \n");
    printf("   -5- 武汉工程大学统一身份认证平台                                \n");
    printf("   -6- 智慧团建平台                                             \n");
    printf("   -7- 优学院平台                                              \n");
    printf("   -8- 显示当前时间                                             \n");
    printf("   -9- 倒计时工具                                              \n");
    /*
    printf("                                                            ##\n");
    printf("     MENU ADD FORM                                          ##\n");
    printf("                                                            ##\n");
    printf("                                                            ##\n");
    */
    printf("   -555- 菜单                                                \n");
    printf("   -886- 退出                                                \n");
    printf("   -666666- 此软件更新地址                                     \n");
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

