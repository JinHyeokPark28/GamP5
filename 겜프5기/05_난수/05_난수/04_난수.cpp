#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main()
{
	// �õ� ����
	srand(GetTickCount());

	// ��ȸ ����
	int chance = 5;

	// ������ ������ ����
	int randNumber = (rand() % 100) + 1;

	// ������ ����
	while (chance != 0)
	{
		// �������� ���
		printf("���� ��ȸ : %d\n", chance);
		printf("���ڸ� �Է��ϼ��� : ");
		int myNumber;
		scanf("%d", &myNumber);

		// �ܼ� ȭ���� ����ϴ�.
		system("cls");

		printf("�Է��� �� : %d\n", myNumber);

		// ������ ����ٸ�
		if (myNumber == randNumber)
		{
			printf("����!\n");
			break;
		}
		else if (myNumber > randNumber)
			printf("DOWN!!\n");
		else printf("UP!!\n");

		// ��ȸ �ϳ� ����
		chance--;

		// 1�� ���
		Sleep(1000);

		// ȭ�� �����
		system("cls");

	}
	printf("���� ��ȸ : %d\n", chance);
	printf("��ǻ�Ͱ� ���� ���� : %d\n", randNumber); 

}