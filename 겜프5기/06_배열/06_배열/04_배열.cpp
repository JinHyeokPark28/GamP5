// int�� �迭 myArray�� �ڷ����� 30���� ������ �ֽ��ϴ�.
// myArray�� �� ��ҿ� 2�� �������� ������ �ֽ��ϴ�. (2�� 1��������)
// N�� �Է¹ް� �迭�� [N]���� ����ϴ� ���α׷��� �ۼ����ּ���.

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

	// ������ ����
	int temp = 2;

	for (int i = 0; i < Length; i++)
	{
		myArray[i] = temp;
		temp *= 2;
	}
	
	// �Է�
	int N;
	printf("N ? ");
	scanf("%d", &N);

	// ���
	for (int i = 0; i < N; i++)
	{
		printf("%d ", myArray[i]);
	}

}