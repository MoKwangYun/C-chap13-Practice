#include<stdio.h>
#include<string.h>

struct data {
	int year;
	int month;
	int day;
};

struct account {
	struct data open;
	char name[12];
	int actnum;
	double balance;
};
int main() {

	struct account  me = { {2021,5,17}, "�蹫��", 1111, 9999 };
	printf("����ü ũ��: ", sizeof(me));
	printf("\n[%d %d %d]", me.open.year, me.open.month, me.open.day);
	printf("\n%s %d %.2f", me.name, me.actnum, me.balance);

	return 0;
}