//구조체 포인터
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
	lec os = { "운영체제", 2,3,3 };
	lec c = { "C프로그래밍", 3, 3, 4 };
	lec* p = &os;

	printf("%s	       %s	       %s	  %s", head[0], head[1], head[2], head[3]);

	printf("\n%s	%s	%d	  %d", p->name, lectype[p->type], p->credit, (*p).hours);


}