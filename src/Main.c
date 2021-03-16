#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "debugger.h"
#include "Ship_files.h"
#include "SystemTools.h"
#include "Data.h"
#include "Mission.h"
#include "Tutorial.h"

#define LINE 20
#define COLUMN 37
int main(){
    
    FILE *fp; 
	char str[128]; 
	if((fp=fopen("data.txt","r"))==NULL) 
    {
        //注册
		tutorial();
	} 
    else 
    {
        load_data();
        fclose(fp);
    }
    for(int i=0;i<10;i++)//防沉迷
    {
        mission();
        save_data();
    }
    debug();
    return 0;
}
