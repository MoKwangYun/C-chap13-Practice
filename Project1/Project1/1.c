//¿¹Á¦ 13-2¸¦ typedef »ç¿ëÇÏ¿©
#include<stdio.h>
#include<string.h>

typedef struct data {
	int year;
	int month;
	int day;

} data;

typedef struct account {
	data open;
	char name[12];
	int actnum;
	double balance;
};

int main() {
	struct account me = { {2021, 05, 20}, "±è¾¾", 1, 10000 };
	printf("%d %d %d", me.open.year, me.open.month, me.open.day);
	printf("\n%s %d %.2f", me.name, me.actnum, me.balance);
}
