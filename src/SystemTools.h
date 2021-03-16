#ifndef SYSTEMTOOLS_H
#define SYSTEMTOOLS_H
#include <stdlib.h>

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
#endif
