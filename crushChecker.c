#define  _CRT_SECURE_NO_WARNINGS
#include "crushChecker.h"
#include <stdio.h>
#include <windows.h>

void crushChecker(int crush){
    if(crush==0){
        /*none*/
    }
    else if(crush==101){
        printf("请正确输入！输入”555“显示菜单！\n");
        fflush(stdin);
    }
    /*
    ADD NEW CRUSH CHECK FUNCTION
    else if(crush=?){

    }
     */

}