#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// 반환형 함수를 이용해서 다음과 같은 프로그램을 작성해주세요
// 반환형 함수 LuckyNumber와 반환형 함수 MyAge()를 이용해서
// 나의나이와 행운의 번호를 출력해주세요

// 결과물
// 저의 행운의 번호는 7입니다.
// 저의 나이는 1살입니다.

int LuckyNumber()
{
	return 7;
}
int MyAge()
{
	return 1;
}

// 반환형 함수 LotteryNumber를작성한 뒤
// 로또 번호 6개를 출력해주세요.
// 로또번호는 1부터 45사이의 6 숫자입니다.

int LotteryNumber()
{
	int lotto[6];
	for (int i = 0; i < 6; i++)
	{
		lotto[i] = (rand() % 45) + 1;
		return lotto[i];
	}
}

void main()
{
	int Luck = LuckyNumber();
	int age = MyAge();
	printf("저의 행운의 번호는 %d번입니다.\n", Luck);
	printf("저의 나이는 %d살 입니다.\n", age);

	// 로또 6자리 받아줄 변수
	int number[6];
	srand(GetTickCount());
	for (int i = 0; i < 6; i++)
	{
		number[i] = LotteryNumber();
		printf("당첨번호 : %d\n", number[i]);
	}
}