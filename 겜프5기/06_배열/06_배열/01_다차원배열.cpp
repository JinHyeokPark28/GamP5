#include <stdio.h>

// 2차원 배열
// ㅁ ㅁ ㅁ
// ㅁ ㅁ ㅁ

// ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ

void main()
{
	int arr2[2][3];
	// 2차원 배열 길이
	int y2 = sizeof(arr2) / sizeof(arr2[0]);
	// 1차원 배열 길이
	int x2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
	printf("arr2의 2차원 배열 길이 : %d\n", y2);
	printf("arr2의 1차원 배열 길이 : %d\n", x2);

	// 값 할당
	int count = 0;

	// 2차원 배열의 크기만큼 반복할 for문
	for (int i = 0; i < y2; i++)
	{
		// 1차원 배열의 크기만큼 반복할 for문
		for (int j = 0; j < x2; j++)
		{
			arr2[i][j] = count++;
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	// 3차원 배열
	int arr3[2][3][4];

	int z3 = sizeof(arr3) / sizeof(arr3[0]);
	int y3 = sizeof(arr3[0]) / sizeof(arr3[0][0]);
	int x3 = sizeof(arr3[0][0]) / sizeof(arr3[0][0][0]);

	// 각 요소에 0부터 23까지의 데이터를 모두 넣어서 출력을 합니다.
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