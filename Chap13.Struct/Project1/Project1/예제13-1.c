#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct account {
	char name[12];
	int actnum;
	double balance;
};
int main() {
	struct account mine = { "ȫ�浿", 1001,30000 };
	struct account yours;

	strcpy(yours.name, "�̵���");
	yours.actnum = 1002;
	yours.balance = 40000;

	printf("����ü ũ�� %d", sizeof(mine));
	printf("\n%s %d %.2f", mine.name, mine.actnum, mine.balance);
	printf("\n%s %d %.2f", yours.name, yours.actnum, yours.balance);


	return 0;
}