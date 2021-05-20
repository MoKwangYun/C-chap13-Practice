//구조체 동등 비교 & *name 과 name[]의 차이
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct data {
	int num;
	char* name;
	char dapt[10];
} data;
int main() {
	data one;
	one.num = 1;
	one.name = "김씨";
	scanf("%s", one.dapt);
	
	data two = { 1, "모씨", "경영학과" };
	printf("%d %s %s", one.num, one.name, one.dapt);
	printf("\n%d %s %s", two.num, two.name, two.dapt);

	if (!strcmp(one.dapt, two.dapt)) {
		printf("\none, two dapt 같다.(1)");
	}
	if (one.num == two.num) {
		printf("\none, two num 같다.(2)");
	}
}