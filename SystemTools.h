#ifndef SYSTEMTOOLS_H
#define SYSTEMTOOLS_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <conio.h>

#define LINE 20
#define COLUMN 150

//缓冲区
short line;
char TextBuff[LINE][COLUMN];

//软件层
int roll(int dies)
{
	int re=0;
	for(int i=0;i<dies;i++)
	{
        
		re+=(rand()%6+1);
	}
	return re;
}

int load_data()
{
    //读档
    
    
}

int save_data()
{
    //存档
    
    
}

//硬件层
//数字转字符串
char* itoa(int value, char* result, int base) {
	// check that the base if valid
	if (base < 2 || base > 36) { *result = '\0'; return result; }

	char* ptr = result, *ptr1 = result, tmp_char;
	int tmp_value;

	do {
		tmp_value = value;
		value /= base;
		*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
	} while ( value );

	// Apply negative sign
	if (tmp_value < 0) *ptr++ = '-';
	*ptr-- = '\0';
	while(ptr1 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
	return result;
}


char* dialoge(char* s)
{
	for (int i=0;s[i];i++) 
	{
		printf("%c",s[i]);
        fflush(stdout);
		usleep(20000);
	}
	sleep(1);
}

char* dialogeIn(char* s)
{
	for (int i=0;s[i];i++) 
	{
		printf("%c",s[i]);
        fflush(stdout);
		usleep(20000);
	}
}

int clr()
{
    for(int i=0;i<LINE;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			TextBuff[i][j]='\0';
		}
	}
	line=0;
    fflush(stdin);
    printf("\n按任意键以继续......\n");
    getch();
    clrscr();
}


void dialogeBuff(char* s)
{
	for (int i=0;s[i];i++) 
	{
		printf("%c",s[i]);
		TextBuff[line][i]=s[i];
		fflush(stdout);
		usleep(20000);
		if(s[i]=='\n')line++;
	}
	sleep(1);
}

void printBuff()
{
    clrscr();
	for(int i=0;i<line;i++)
	{
		for(int j=0;TextBuff[i][j];j++)
		{
			printf("%c",TextBuff[i][j]);
		}
	}
}

#endif
