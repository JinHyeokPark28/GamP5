// 배열의 각 자리에 1 ~ 100까지의 데이터를 넣고 출력을 해보세요.
#include <stdio.h>
void main()
{
	int myArray[100];

	// 길이 
	int arrLength = sizeof(myArray) / sizeof(myArray[0]);

	// 값 할당
	for (int i = 0; i < arrLength; i++)
	{
		myArray[i] = i + 1;
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
}