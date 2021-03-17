#ifndef DATA_H
#define DATA_H

#include <stdbool.h>



//玩家信息
struct player_info{
    char player_name[30];//玩家名字
    short service_year,service_month;//服役日期
    char submarine_type[7];//潜艇型号
    short submarine_type_number;
    short submarine_id;//潜艇ID
    short player_id;//玩家ID号
    char password[15];//玩家密码
}player;
/*submarine_type_number
 *1.VIIA
 *2.VIIB
 *3.IXA
 *4.IXB
 *5.VIIC
 *6.IXC
 *7.VIID
 *8.VIICFk
*/


//当前时间
short year,month;

short mission_number;//任务编号
short mission_type_number;

//已击沉
//注意，船id是一开始的，此击沉flag从零开始
bool sunk_ship_flag[3][100];
bool NA_sunk_ship_flag[3][20];
bool C_sunk_ship_flag[10];



//军衔,从0到4
short rank=1;

//勋章，从0到4
short award;


//艇员能力(特指水手)

/*
*0是艇员，从0到4，
*1是大副
*2是二副
*3是工程师
*4是医生
*/
short crew_quality[5]={1,0,0,0,0};



/*
*人员受伤状态
*0没事，1轻伤，2重伤，3阵亡
*0指挥官，1-4艇员,5大副，6二副，7工程师，8医生，9特工
*/
short injure_status[10]={0,0,0,0,0,0,0,0,0,0};



/*艇受损状态:
*0进水  1柴油  2电擎  3水听器  
*4潜水舵  5船体  6潜望镜  7防空炮  
*8甲板炮  9前鱼雷管  10后鱼雷管  
*11燃料箱  12无线电  13电池
*/
short damage_status[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};

//鱼雷数，甲板炮
int FwTube[3],AftTube[3],FwLoad[2],AftLoad[2],deck_ammo;//G7A,G7E,Mine


//战绩,击沉吨数，于...时间...地点以...型号击沉...船
int sunk_tons;
char battle_log[150][160];

#endif
  