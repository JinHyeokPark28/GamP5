#include <stdio.h>
void main()
{
	// 배열
	// 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료형입니다.

	// 배열 선언 방법
	// 자료형 배열의 이름[배열길이(상수)];
	// ex) int myarry[3];
	// 배열 선언
	int myArray[3];
	myArray[0] = 10;
	myArray[1] = 20;
	myArray[2] = 30;

	// 배열의 길이를 구하는 방법
	printf("%d\n", sizeof(myArray));
	// 자료형의 크기 * 자료형의 개수 = 배열의 크기
	// 배열의 크기 / 배열의 인덱스 1개
	int arrLength = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < arrLength; i++)
	{
		myArray[i] += 1;
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
}