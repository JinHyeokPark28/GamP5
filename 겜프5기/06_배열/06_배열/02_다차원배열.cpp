#include <stdio.h>
void main()
{
	// 다차원 배열을 이용해서
	//다음과 같은 결과를 출력하세요
	// 1 2 3 4 5
	// 6 7 8 9 10
	// 11 12 13 14 15
	// 16 17 18 19 20
	int arr[4][5];
	int count = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			arr[i][j] = ++count;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	// 16 17 18 19 20
	// 11 12 13 14 15
	//  6  7  8  9 10
	//  1  2  3  4  5
	// 입력용
	count = 1;
	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i > -1; i--)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			arr[i][j] = count++;
		}
	}
	// 출력용
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("%s%d ",(arr[i][j] < 10 ? " " : "") ,arr[i][j]);
		}
		printf("\n");
	}


// 20 19 18 17 16
// 15 14 13 12 11
// 10  9  8  7  6
//  5  4  3  2  1

	count = 1;
	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i > -1; i--)
	{
		for(int j = sizeof(arr[0])/sizeof(arr[0][0]) -1; j > -1; j--)
		{
			arr[i][j] = count++;
		}
	}
	// 출력용
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("%s%d ", (arr[i][j] < 10 ? " " : ""), arr[i][j]);
		}
		printf("\n");
	}

}

