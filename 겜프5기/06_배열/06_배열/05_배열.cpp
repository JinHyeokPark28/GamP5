#include <stdio.h>
void main()
{
	// 배열의 각 요소들을 초기화하는 방법?
	// 자료형 배열이름[배열의 길이] = {각 요소의 값을 초기화하면 됨};
	// 배열에 각 요소에 초기화할 값이 10개 미만일때
	int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 아직 배열의 길이가 정해지지 않았을 때
	int myArray2[] = { 1,2,3,4,5,6 };

	for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++)
	{
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
	printf("\n\n");
	for (int i = 0; i < sizeof(myArray2) / sizeof(myArray2[0]); i++)
	{
		printf("myArray2[%d] = %d\n", i, myArray2[i]);
	}
	
}