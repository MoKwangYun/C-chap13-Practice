//����ü ���� �� & *name �� name[]�� ����
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
	one.name = "�达";
	scanf("%s", one.dapt);
	
	data two = { 1, "��", "�濵�а�" };
	printf("%d %s %s", one.num, one.name, one.dapt);
	printf("\n%d %s %s", two.num, two.name, two.dapt);

	if (!strcmp(one.dapt, two.dapt)) {
		printf("\none, two dapt ����.(1)");
	}
	if (one.num == two.num) {
		printf("\none, two num ����.(2)");
	}
}