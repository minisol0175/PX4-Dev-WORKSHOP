#include "stdio.h"

int isLeapYear(int year);
int main()
{
	int year;
	printf("�⵵�� �Է��ϼ���\n");
	scanf_s("%d", &year);
	if (isLeapYear(year)) {
		printf("%d���� ���󿡳� �����Դϴ�\n", year);
	} else{
		printf("%d���� �̷����� ������ �ƴϾ����ϴ�\n", year);
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