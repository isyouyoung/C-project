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

	printf("�Է��� �л� �� : ");
	scanf("%d", &b);

	struct student *p;
	p = (struct student *)malloc(sizeof(struct student) * b);

	int i;
	for(i = 0; i < b; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p + i) -> name, &(p + i) -> a );
	}

	printf("\n\n");

	printf("--�л� ��� -- \n");
	for(i = 0; i < b; i++)
	{
		printf("�̸�:%s , ���� : %d\n", (p + i) -> name, (p + i) -> a );
	}
}

