#include <stdio.h>
void main()
{
	// �迭�� �� ��ҵ��� �ʱ�ȭ�ϴ� ���?
	// �ڷ��� �迭�̸�[�迭�� ����] = {�� ����� ���� �ʱ�ȭ�ϸ� ��};
	// �迭�� �� ��ҿ� �ʱ�ȭ�� ���� 10�� �̸��϶�
	int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ���� �迭�� ���̰� �������� �ʾ��� ��
	int myArray2[] = { 1,2,3,4,5,6 };

	for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++)
	{
		printf("myArray[%d] = %d\n", i, myArray[i]);
	}
	printf("\n\n");
	for (int i = 0; i < sizeof(myArray2) / sizeof(myArray2[0]); i++)
	{
		printf("myArray2[%d] = %d\n", i, myArray2[i]);
	}
	
}