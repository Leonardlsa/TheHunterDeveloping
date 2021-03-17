#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "SystemTools.h"
#include "Data.h"

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
    printf("—————————欢迎来到《潜杀猎航》———————\n");
    printf("************************************\n");
    printf("1939年\n");
	dialoge("哨兵:这里是大德意志大西洋海军司令部，请出示身份证明:\n");
    dialoge("哨兵:你叫什么?\n");
    printf("我是");
    scanf("%s",&player.player_name);
    getch();
    dialoge("哨兵:是您!Wilson部长在等您。\n");
    dialoge("哨兵:进门左转，将会有人带你去见部长先生\n");
    clr();
    
    dialoge("咚咚咚...\n");
	dialoge("Wilson:请进\n");
	printf(player.player_name);
    printf(":");
    printf(player.player_name);
	dialoge("前来报道!\n");
	clr();

    
    dialogeBuff("—————————————部长办公室—————————————\n");
	dialogeBuff("Wilson:哦？先生，欢迎欢迎，请坐。\n");
	dialogeBuff("Wilson:元首向我提到过你，一名优秀的海军军官。\n");
	dialogeBuff("Wilson:现在想做一名U艇指挥官了？\n");
	dialogeBuff("Wilson:你想什么时间加入我们的潜艇计划？（1939.09-1943.06）\n");


    int year,month;
	if(0)
	{
		loop1:	dialoge("Wilson:哦，看清楚要求！现在已经是1939年9月了，战局万变，你不能在1943年6月后才来为帝国效力\n");
    }		
	printf("年份？（1939-1943）:");
	scanf("%d",&year);
    printf("月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");
	scanf("%d",&month);
    clrscr();
    printBuff();
    dialoge("我打算");printf("%d年%d月",year,month);dialoge("在这里服役\n");sleep(1);

		
		switch(year)
		{
			case 1939: 
				{
					if(month<9||month>12)goto loop1;
					dialoge("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");
                    dialoge("现在，编制人数不多，你直接被任命为Kapitänleutnant.\n");
					dialoge("趁着英国佬还没什么对我们的准备，我们想想办法好好干他一炮！\n");
					break;
				}
			case 1940: 
				{
					if(month<1||month>12)goto loop1;
					dialoge("Wilson:也行，那么帝国潜艇部队明年等候你的到来!\n");
					break;
				}
			case 1941: 
				{
					if(month<1||month>12)goto loop1;
					dialoge("Wilson:哈？想等我们有了更成熟的装备和技巧再来？\n不愧是你，成熟而又稳重，对吧？");
					break;
				}
			case 1942: 
				{
					if(month<1||month>12)goto loop1;
					dialoge("Wilson:最近手上有些项目忙不过来？嗯，你要记住，帝国利益要放在第一位！\n好机会可不是年年有的。你有点保守？好吧，我们部队会给你展现他的实力\n");
					break;
				}
			case 1943: 
				{
					if(month<1||month>6)goto loop1;
					dialoge("Wilson:有点过于慎重了？\nWilson:我们没法预测到那时的战局，");sleep(2);
					dialoge("Wilson:祝我们共同好运吧！\n");
					break;
				}
			default: goto loop1;
		}

	dialoge("Wilson:你正是我所期盼的那样！\n");
    player.service_month=month;
    player.service_year=year;
	dialoge("Wilson:那么，稍作休整，就出征吧。帝国以你为傲！\n");
	dialoge("Heil Hitler!（高举左手）\n");
	clr();
    //working...
    
    save_data();
}
int login()
{
    short id;
    char input[10];
    printf("—————————欢迎来到《潜杀猎航》—————————\n");
    printf("*************************************\n");
	dialoge("哨兵:这里是大德意志大西洋海军司令部，请出示身份证明:\n");
    dialoge("哨兵:你的ID？\n");
    scanf("%d",&id);getch();
    if(id==(player.player_id))
    {
        printf("哨兵:您的指挥官口令？\n");
        scanf("%s",&input);
        getch();
        if(strcmp(input,(player.password)))
        {
            printf("哨兵:您好,%s指挥官",player.player_name);
            return 0;
        }
        else return -1;
    }
	else return -1;
}
#endif
