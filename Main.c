#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<unistd.h>

#include "debugger.h"
#include "Ship_files.h"
#include "SystemTools.h"
#include "Data.h"
#include "Mission.h"
#include "Tutorial.h"




int main(){
    
    srand((unsigned)time(NULL));
    
    FILE *fp; 
	char str[128]; 
	if((fp=fopen("data.txt","r"))==NULL) 
    {
        //注册
		tutorial();
	} 
    else 
    {
        fclose(fp);
        load_data();
        
        if(login())
        {
            //验证出错
            printf("岗哨:抱歉，我不明白。\n");
            printf("你被守卫赶出了基地");
            clr();
            return -1;
        }
        else 
        {
            printf("正在为您跳转中...\n");
            clr();
        }
    }
    for(int i=0;i<10;i++)//防沉迷
    {
        mission();
        save_data();
    }
    debug();
    return 0;
}
