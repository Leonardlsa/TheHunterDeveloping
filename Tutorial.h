#ifndef TUTORIAL_H
#define TUTORIAL_H
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "SystemTools.h"
#include "Data.h"
#include "ResoursePool.h"
#include "debugger.h"

short year,month;
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

void generate_id()
{
    player.player_id=rand()%9999;
}

void show_card()
{
    //应该还要勋章的，还有ID
	printf("这是你的潜艇军官证，好好保管！这是属于你的荣耀！\n");
	printf("*************************************\n");
	printf("**名字\t潜艇\tID\t**\n");
	printf("**%s\t%s\t%d\t**\n",
            player.player_name,player.submarine_type,player.player_id);
    printf("**军衔\t\t\t勋章\t服役时间\t**\n");
    printf("**%s\t%s\t%d.%d\t**\n",player.rank,player.award,player.service_year,player.service_month);
	printf("*************************************\n");
	printf("系统提示:请一定记住您的ID号!它是您的唯一身份标识!\n");
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
    dialogeIn(player.player_name);
    dialogeIn(":");
    dialogeIn(player.player_name);
    dialoge("前来报道!\n");
    clr();
    dialogeBuff("—————————————部长办公室—————————————\n");
    dialogeBuff("Wilson:哦？先生，欢迎欢迎，请坐。\n");
    dialogeBuff("Wilson:元首向我提到过你，一名优秀的海军军官。\n");
    dialogeBuff("Wilson:现在想做一名U艇指挥官了？\n");
    dialogeBuff("Wilson:你想什么时间加入我们的潜艇计划？（1939.09-1943.06）\n");
    
    if(0)
    {
        loop1:	dialoge("Wilson:哦，看清楚要求！现在已经是1939年9月了，战局万变，你不能在1943年6月后才来为帝国效力\n");
    }
    printf("年份？（1939-1943）:");
    scanf("%d",&year);getch();
    printf("月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");
    scanf("%d",&month);getch();
    clrscr();
    printBuff();
    dialogeIn("我打算");
    printf("%d年%d月",year,month);
    dialoge("在这里服役\n");
    sleep(1);
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
            dialoge("Wilson:哈？想等我们有了更成熟的装备和技巧再来？\n");
            dialoge("Wilson:不愧是你，成熟而又稳重，对吧？");
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
            dialoge("Wilson:有点过于慎重了？\n");
            dialoge("Wilson:我们没法预测到那时的战局\n");
            dialoge("Wilson:祝我们共同好运吧！\n");
            break;
        }
        default: goto loop1;
    }
    dialoge("Wilson:你正是我所期盼的那样！\n");
    player.service_month=month;
    player.service_year=year;
    generate_id();
    dialogeIn("Wilson:这是你的军官证ID:");printf("%d\n",player.player_id);
    dialoge("Wilson:请牢记它，它很重要，标志着你唯一的军官身份。\n");
    dialoge("Wilson:当你来服役时，你会得到你的军官证的。\n");
    dialoge("Wilson:那么，稍作休整，就出征吧。帝国以你为傲！\n");
    dialoge("Heil Hitler!（高举左手）\n");
    clr();
    if(year==1939&&month>9)printf("%d个月后...\n",month-9);
    else if(year==1940&&month<9)printf("%d个月后...\n",month+3);
    else if(month>9)printf("%d年%d个月后...\n",year-1939,month-9);
    else if(month<9)printf("%d年%d个月后...\n",year-1940,month+3);
    else if(year!=1939)printf("%d年后...\n",year-1939);
    else printf("第二天\n");
    
    short choose;
    dialogeBuff("—————————（难得的晴天）船坞里————————\n");
    dialogeBuff("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
    if(0)
    {
        loop2:printBuff();
        dialoge("(如果这是第2次及以上问你，请确认你的输入是否合理)\n");
    }
    printf("船坞里有几种型号的潜艇:\nVIIA,VIIB,IXA");
    //潜艇型号随时间更新
    if(year>1940||year==1940&&month>3)printf(",IXB");
    if(year>1940||year==1940&&month>9)printf("\n另一边还有：VIIC");
    if(year>1941||year==1941&&month>4)printf(",IXC");
    if(year>1941)printf(",VIID");
    if(year==1943&&month>4)printf(",VIICFk");
    printf("\n");
    
    printf("你想要:\n1.VIIA 2.VIIB 3.IXA ");
    if(year>1940||year==1940&&month>3)printf("4.IXB ");
    if(year>1940||year==1940&&month>9)printf("\n5.VIIC ");
    if(year>1941||year==1941&&month>4)printf("6.IXC ");
    if(year>1941)printf("7.VIID ");
    if(year==1943&&month>4)printf("8.VIICFk");
    printf("\n");
    
    scanf("%d",&choose);getch();
    if(choose<1||choose>8)goto loop2;
    if(choose==4&&(!(year>1940||year==1940&&month>3)))goto loop2;
    if(choose==5&&(!(year>1940||year==1940&&month>9)))goto loop2;
    if(choose==6&&(!(year>1941||year==1941&&month>4)))goto loop2;
    if(choose==7&&(!(year>1941)))goto loop2;
    if(choose==8&&(!(year==1943&&month>4)))goto loop2;
    player.submarine_type_number=choose;
    strcpy(player.submarine_type,submarine_type_name[choose-1]);
    
	printBuff();
	dialogeIn("我要");printf("Type %s",player.submarine_type);dialoge("！这艘怎么样？(指向旁边的一艘U艇）\n");
	dialogeIn("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢");printf("Type %s",player.submarine_type);dialoge("的艇。\n");
    if(player.submarine_type_number==3||player.submarine_type_number==4||player.submarine_type_number==6)dialoge("顺带说一句，IX系列指挥官都是Kapitänleutnant喔\n");
	dialoge("Wilson:这艘船归你了我的艇长\n");
    

	int r=roll(1);
	if(year==1939||(year==1940&&r>2)||(year==1941&&r>3)||(year>1941&&r==6)||player.submarine_type[0]=='I')
    {
        dialoge("Wilson:我的朋友，帝国很看重你，我们希望你能为元首更好的工作，将你提升为Käpitanleutnant，希望你不会辜负我的期望\n");
        player.rank_number=1;
    }
	else 
    {
        dialoge("Wilson:我的朋友，我们任命你为Oberleutnant，请你好好表现，你会得到晋升的\n");
        player.rank_number=0;
    }
    
    player.award_number=0;
    strcpy(player.rank,rank_name[player.rank_number]);
    debug();//至此正常
    strcpy(player.award,award_name[player.award_number]);
    debug();//未被运行
    clr();
    debug();
		show_card();
		clr();
		dialoge("（指向旁边）这是我们帝国第一批优秀的艇员——他们都受过足够的训练\n");
		printf("Peter:你好，%s先生。哦不，艇长,我和Eric,Leo,Tommy是这艘艇的士官长\n",player.player_name);
		dialoge("Eric,Leo,Tommy:Hi!\n");

		dialoge("Dr:我知道你记不下来那么多名字，你就叫我Dr吧，我是这艘艇的医生\n");
		dialoge("1WO:我是这艘艇的大副\n");
		dialoge("2WO:我是这艘艇的二副\n");
		dialoge("LI:我是这艘艇的随舰工程师\n");
		dialoge("Wilson:够多人了？要不是有那4个士官长，你还需要和40多个其他艇员打招呼！\n");
		dialoge("好了别担心，你们航程上有的是时间互相熟悉！\n");
		dialoge("这些将是要和你一起战斗的伙伴,记住，就连最基础的每一个艇员，都将是你们在大西洋底生存的保障\n");
		dialoge("好了我的朋友，出征吧，祝你好运！\n");
		dialoge("众：Heil Hitler！\n");
		clr();

		dialoge("——————————————潜艇里——————————————\n");
		dialoge("Eric:先生，请允许我来为您介绍一下这艘艇。\n");
		dialoge("好，你说吧。\n");
		//introduce
		dialoge("好吧，我清楚了，起航！\n");
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
    scanf("%d",&id);
    getch();
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
