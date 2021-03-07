// int형 배열 myArray는 자료형을 30개를 가지고 있습니다.
// myArray는 각 요소에 2의 제곱값을 가지고 있습니다. (2의 1제곱시작)
// N을 입력받고 배열의 [N]까지 출력하는 프로그램을 작성해주세요.

// N ? 3
// 2 4 8
// N ? 5
// 2 4 8 16 32

#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int myArray[30];
	int Length = sizeof(myArray) / sizeof(myArray[0]);

	// 제곱값 변수
	int temp = 2;

	for (int i = 0; i < Length; i++)
	{
		myArray[i] = temp;
		temp *= 2;
	}
	
	// 입력
	int N;
	printf("N ? ");
	scanf("%d", &N);

	// 출력
	for (int i = 0; i < N; i++)
	{
		printf("%d ", myArray[i]);
	}

}