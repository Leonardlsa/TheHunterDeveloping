#ifndef DEBUGGER_H
#define DEBUGGER_H
#include "SystemTools.h"

#include<stdio.h>
int debug(){
    
    printf("调试中:工作正常\n");
    for(int i=0;i<300;i++)
    printf("%d ",roll(2));
    return 0;
}

#endif