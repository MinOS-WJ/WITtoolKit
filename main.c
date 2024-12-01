#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "UIwindow.h"
#include "timeFunction.h"
#include "crushChecker.h"

int statement=1;
int shut_er=0;


int main(void) {
    openLoading();
    head();
    homepage();
    int crush=0;

    while(shut_er==0){

        printf("请输入选项：");
        scanf("%d",&statement);

        if(statement==1){
            system("start msedge https://www.baidu.com/");
        }
        else if(statement==2){
            system("start msedge http://www.gaoxiaokaoshi.com/Loginb.aspx");
        }
        else if(statement==3){
            system("start msedge http://cwwsjf.wit.edu.cn/wsjf/login.aspx?local=zh-cn");
        }
        else if(statement==4){
            system("start msedge jwxt.wit.edu.cn/jsxsd/xk/");
        }
        else if(statement==5){
            system("start msedge https://iam.wit.edu.cn/");
        }
        else if(statement==6){
            system("start msedge https://zhtj.youth.cn/zhtj/");
        }
        else if(statement==7){
            system("start msedge https://courseweb.ulearning.cn/ulearning/index.html");
        }
        else if(statement==8){
            nowTime();
            fflush(stdin);
        }
        else if(statement==9){
            fflush(stdin);
            countDown();
            fflush(stdin);
        }
        /*
        //添加功能模板：
        if(statement==?){
             function();
        }
         */
        else if(statement==666666){
            system("start msedge https://github.com/MinOS-WJ/WITtoolKit");
            printf("如果未安装Edge浏览器则访问：https://github.com/MinOS-WJ/WITtoolKit.git\n");
        }
        else if(statement==555){
            homepage();
        }
        else if(statement==886){
            printf("Good Bye!\n");
            shut_er=1;
            closeAll();
        }
        else{
            crush=101;
        }

            crushChecker(crush);
    }

    return 0;
}