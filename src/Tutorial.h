#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <stdio.h>
#include "SystemTools.h"
int create_data()
{
    FILE *fp;
    fp=fopen("data.txt","w+");
    if(fp==NULL)printf("创建存档失败\n");
    else fclose(fp);
    fp=fopen("score.txt","w+");
    if(fp==NULL)printf("创建战绩失败\n");
    else fclose(fp);
}
int tutorial()
{
    //注册，新手教程
    create_data();
    //working...
    
    save_data();
}
#endif
