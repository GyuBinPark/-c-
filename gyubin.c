#include <stdio.h>
int main()
{
	int arr[5];
	int sum = 0, i;
	int max, min;

	puts("다음과 같이 배열 공간을 할당합니다.");
	for (i = 0; i < 5; i++)
		scanf_s("%d",&arr[i]);


	for (i = 0; i < 5; i++)
		printf("배열요소에 저장된 각각의 값은:%d",arr[i]);

	for (i = 0; i < 5; i++)
		sum += arr[i];
	printf("배열요소에 저장된 값의 합: %d\n", sum);

	puts("------------------------------------");
	puts("이제 최댓값과 최솟값을 구해보자....");



	printf("입력된 정수중에 최댓값은 %d이다.", max);




	printf("입력된 정수중에 최솟값은 %d이다.",min);


	return 0;

}

/* 영상+어쩌다 알게된 단축키들
컨트롤+sh +l  행삭제
ctrl+X 행 잘라내기
ctrl+C 행 복사 (빈 선택)
alt+Down 행을 아랫줄로 이동
alt+Up 행을 윗줄로 이동

ctrl+Enter 아래에 행 삽입
ctrl+shift+Enter 위에 삽입

ctrl+D 마우스 커서에 위치한 행을 똑같이 아래에 복사 한다.
ctrl+]  블록 { }를 왔다갔다.
ctrl+sh+] 블록 전체선택

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





/*1169 나이 계산2 
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