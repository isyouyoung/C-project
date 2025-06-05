#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student
	{
		char name[10];
		int a;
	};

	int b;

	printf("입력할 학생 수 : ");
	scanf("%d", &b);

	struct student *p;
	p = (struct student *)malloc(sizeof(struct student) * b);

	int i;
	for(i = 0; i < b; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d", (p + i) -> name, &(p + i) -> a );
	}

	printf("\n\n");

	printf("--학생 명단 -- \n");
	for(i = 0; i < b; i++)
	{
		printf("이름:%s , 나이 : %d\n", (p + i) -> name, (p + i) -> a );
	}
}

