//구조체 배열
#include<stdio.h>

struct lecture {
	char name[20];
	int type;
	int credit;
	int hours;
};
typedef struct lecture lec;

char* head[] = { "강좌명", "강좌구분", "학점", "시수" };
char* lectype[] = { "교양", "일반선택", "전공필수","전공선택" };

int main() {
	lec c[] = { {"OS",0,2,2} ,{"C프로그래밍",3,3,4},{"자료구조",2,3,3 } };

	int arysize = sizeof(c) / sizeof(c[0]); // == sizeof(c)/sizeof(lec)
	
	printf("%s     %s     %s     %s", head[0], head[1], head[2], head[3]);

	for (int i = 0; i < arysize; i++) {
		printf("\n%s     %s     %d     %d", c[i].name, lectype[c[i].type], c[i].credit, c[i].hours);
	}
}