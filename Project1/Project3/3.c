//����ü ������
#include<stdio.h>

struct lecture {
	char name[20];
	int type;
	int credit;
	int hours;
};
typedef struct lecture lec;

char* head[] = { "���¸�", "���±���", "����", "�ü�" };
char* lectype[] = { "����", "�Ϲݼ���", "�����ʼ�","��������" };
int main() {
	lec os = { "�ü��", 2,3,3 };
	lec c = { "C���α׷���", 3, 3, 4 };
	lec* p = &os;

	printf("%s	       %s	       %s	  %s", head[0], head[1], head[2], head[3]);

	printf("\n%s	%s	%d	  %d", p->name, lectype[p->type], p->credit, (*p).hours);


}