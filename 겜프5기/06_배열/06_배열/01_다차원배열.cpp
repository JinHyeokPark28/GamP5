#include <stdio.h>

// 2���� �迭
// �� �� ��
// �� �� ��

// �� �� �� �� �� �� ��

void main()
{
	int arr2[2][3];
	// 2���� �迭 ����
	int y2 = sizeof(arr2) / sizeof(arr2[0]);
	// 1���� �迭 ����
	int x2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
	printf("arr2�� 2���� �迭 ���� : %d\n", y2);
	printf("arr2�� 1���� �迭 ���� : %d\n", x2);

	// �� �Ҵ�
	int count = 0;

	// 2���� �迭�� ũ�⸸ŭ �ݺ��� for��
	for (int i = 0; i < y2; i++)
	{
		// 1���� �迭�� ũ�⸸ŭ �ݺ��� for��
		for (int j = 0; j < x2; j++)
		{
			arr2[i][j] = count++;
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	// 3���� �迭
	int arr3[2][3][4];

	int z3 = sizeof(arr3) / sizeof(arr3[0]);
	int y3 = sizeof(arr3[0]) / sizeof(arr3[0][0]);
	int x3 = sizeof(arr3[0][0]) / sizeof(arr3[0][0][0]);

	// �� ��ҿ� 0���� 23������ �����͸� ��� �־ ����� �մϴ�.
	count = 0;
	for (int i = 0; i < z3; i++)
	{
		for (int j = 0; j < y3; j++)
		{
			for (int k = 0; k < x3; k++)
			{
				arr3[i][j][k] = count++;
				printf("%d ", arr3[i][j][k]);
			}
			printf("\n");
		}
	}
}