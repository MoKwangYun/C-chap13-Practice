#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct account {
	char name[12];
	int actnum;
	double balance;
};
int main() {
	struct account mine = { "홍길동", 1001,30000 };
	struct account yours;

	strcpy(yours.name, "이동원");
	yours.actnum = 1002;
	yours.balance = 40000;

	printf("구조체 크기 %d", sizeof(mine));
	printf("\n%s %d %.2f", mine.name, mine.actnum, mine.balance);
	printf("\n%s %d %.2f", yours.name, yours.actnum, yours.balance);


	return 0;
}