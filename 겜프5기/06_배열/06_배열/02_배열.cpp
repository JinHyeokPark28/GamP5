// �迭�� �� �ڸ��� 1 ~ 100������ �����͸� �ְ� ����� �غ�����.
#include <stdio.h>
void main()
{
	int myArray[100];

	// ���� 
	int arrLength = sizeof(myArray) / sizeof(myArray[0]);

	// �� �Ҵ�
	for (int i = 0; i < arrLength; i++)
	{
		myArray[i] = i + 1;
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
}