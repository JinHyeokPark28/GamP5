#include <stdio.h>
void main()
{
	// �迭
	// ���� �ڷ����� ���� ���ӵ� �޸� �������� �̷���� �ڷ����Դϴ�.

	// �迭 ���� ���
	// �ڷ��� �迭�� �̸�[�迭����(���)];
	// ex) int myarry[3];
	// �迭 ����
	int myArray[3];
	myArray[0] = 10;
	myArray[1] = 20;
	myArray[2] = 30;

	// �迭�� ���̸� ���ϴ� ���
	printf("%d\n", sizeof(myArray));
	// �ڷ����� ũ�� * �ڷ����� ���� = �迭�� ũ��
	// �迭�� ũ�� / �迭�� �ε��� 1��
	int arrLength = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < arrLength; i++)
	{
		myArray[i] += 1;
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
}