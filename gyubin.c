#include <stdio.h>
int main()
{
	int arr[5];
	int sum = 0, i;
	int max, min;

	puts("������ ���� �迭 ������ �Ҵ��մϴ�.");
	for (i = 0; i < 5; i++)
		scanf_s("%d",&arr[i]);


	for (i = 0; i < 5; i++)
		printf("�迭��ҿ� ����� ������ ����:%d",arr[i]);

	for (i = 0; i < 5; i++)
		sum += arr[i];
	printf("�迭��ҿ� ����� ���� ��: %d\n", sum);

	puts("------------------------------------");
	puts("���� �ִ񰪰� �ּڰ��� ���غ���....");



	printf("�Էµ� �����߿� �ִ��� %d�̴�.", max);




	printf("�Էµ� �����߿� �ּڰ��� %d�̴�.",min);


	return 0;

}

/* ����+��¼�� �˰Ե� ����Ű��
��Ʈ��+sh +l  �����
ctrl+X �� �߶󳻱�
ctrl+C �� ���� (�� ����)
alt+Down ���� �Ʒ��ٷ� �̵�
alt+Up ���� ���ٷ� �̵�

ctrl+Enter �Ʒ��� �� ����
ctrl+shift+Enter ���� ����

ctrl+D ���콺 Ŀ���� ��ġ�� ���� �Ȱ��� �Ʒ��� ���� �Ѵ�.
ctrl+]  ��� { }�� �Դٰ���.
ctrl+sh+] ��� ��ü����

*/


/*
int b=0,i,bot[10]= {0},k;

	for (i=0;i<9;i++)
	{
		scanf_s("%d",k);
		bot[i]=k;
	}

	scanf_("%d",b);
	printf("%d", bot[b]);
	*/





/*1169 ���� ���2 
int a,age,b,now=2013,i;
	scanf_s("%d",&age);

	b ==now - age;

	int year[4];
	for (i = 0; i < 4; i++)
	{
		year[i] = b;

	}
	scanf_s("%d", year);

	{
		if ((year[0] / 1000) == 1)
		{
			printf("%d%d %c", year[2], year[3], 1);;
		}
		else if ((year[0] / 1000) == 2)
		{
			printf("%d%d %c", year[2], year[3], 3);
		}
		else
			puts("OMG!");
	}


	return 0;




*/