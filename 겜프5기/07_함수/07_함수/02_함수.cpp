#include <stdio.h>
// ��ȯ�� -> return ��ȯ��
// �Լ����� -> �ܾ� + �ܾ�
// ù �ܾ��� ù���ڴ� �빮�ڷ� �����ؾ� �մϴ�.
int MyAge()
{
	return 15;
}

void main()
{
	int age = MyAge();
	printf("age = %d\n", age);

	printf("�Լ��� �ҷ��ɴϴ�. My Age�� ��ȯ�� : %d\n", MyAge());
}