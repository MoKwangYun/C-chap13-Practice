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

	struct account  me = { {2021,5,17}, "김무무", 1111, 9999 };
	printf("구조체 크기: ", sizeof(me));
	printf("\n[%d %d %d]", me.open.year, me.open.month, me.open.day);
	printf("\n%s %d %.2f", me.name, me.actnum, me.balance);

	return 0;
}