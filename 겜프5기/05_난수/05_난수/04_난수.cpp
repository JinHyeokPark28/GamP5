#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main()
{
	// 시드 설정
	srand(GetTickCount());

	// 기회 변수
	int chance = 5;

	// 정답을 저장할 변수
	int randNumber = (rand() % 100) + 1;

	// 게임을 시작
	while (chance != 0)
	{
		// 상태정보 출력
		printf("남은 기회 : %d\n", chance);
		printf("숫자를 입력하세요 : ");
		int myNumber;
		scanf("%d", &myNumber);

		// 콘솔 화면을 지웁니다.
		system("cls");

		printf("입력한 값 : %d\n", myNumber);

		// 정답을 맞췄다면
		if (myNumber == randNumber)
		{
			printf("정답!\n");
			break;
		}
		else if (myNumber > randNumber)
			printf("DOWN!!\n");
		else printf("UP!!\n");

		// 기회 하나 없앰
		chance--;

		// 1초 대기
		Sleep(1000);

		// 화면 지우기
		system("cls");

	}
	printf("남은 기회 : %d\n", chance);
	printf("컴퓨터가 뽑은 숫자 : %d\n", randNumber); 

}