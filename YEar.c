#include "stdio.h"

int isLeapYear(int year);
int main()
{
	int year;
	printf("년도를 입력하세요\n");
	scanf_s("%d", &year);
	if (isLeapYear(year)) {
		printf("%d년은 세상에나 윤년입니다\n", year);
	} else{
		printf("%d년은 이럴수가 윤년이 아니었습니다\n", year);
	}
	return 0;
}

int isLeapYear(int year)
{
	if (0 == year % 4 && 0 != year % 100 || 0 == year % 400)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}