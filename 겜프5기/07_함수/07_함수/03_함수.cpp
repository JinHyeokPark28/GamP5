#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// ��ȯ�� �Լ��� �̿��ؼ� ������ ���� ���α׷��� �ۼ����ּ���
// ��ȯ�� �Լ� LuckyNumber�� ��ȯ�� �Լ� MyAge()�� �̿��ؼ�
// ���ǳ��̿� ����� ��ȣ�� ������ּ���

// �����
// ���� ����� ��ȣ�� 7�Դϴ�.
// ���� ���̴� 1���Դϴ�.

int LuckyNumber()
{
	return 7;
}
int MyAge()
{
	return 1;
}

// ��ȯ�� �Լ� LotteryNumber���ۼ��� ��
// �ζ� ��ȣ 6���� ������ּ���.
// �ζǹ�ȣ�� 1���� 45������ 6 �����Դϴ�.

int LotteryNumber()
{
	int lotto[6];
	for (int i = 0; i < 6; i++)
	{
		lotto[i] = (rand() % 45) + 1;
		return lotto[i];
	}
}

void main()
{
	int Luck = LuckyNumber();
	int age = MyAge();
	printf("���� ����� ��ȣ�� %d���Դϴ�.\n", Luck);
	printf("���� ���̴� %d�� �Դϴ�.\n", age);

	// �ζ� 6�ڸ� �޾��� ����
	int number[6];
	srand(GetTickCount());
	for (int i = 0; i < 6; i++)
	{
		number[i] = LotteryNumber();
		printf("��÷��ȣ : %d\n", number[i]);
	}
}