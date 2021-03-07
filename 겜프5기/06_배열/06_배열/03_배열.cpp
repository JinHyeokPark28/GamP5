// int형 배열 myArray는 30개의 int 데이터를 갖고 있다.
// 각 배열의 자리에 31 ~ 60개의 데이터를 넣어서 출력해주세요.
#include <stdio.h>
void main()
{
	int myArray[30];
	for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++)
	{
		myArray[i] = i + 31;
		printf("%d \n", myArray[i]);
	}
}