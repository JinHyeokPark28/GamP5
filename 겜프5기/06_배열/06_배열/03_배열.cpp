// int�� �迭 myArray�� 30���� int �����͸� ���� �ִ�.
// �� �迭�� �ڸ��� 31 ~ 60���� �����͸� �־ ������ּ���.
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