#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	// ���ڿ� �迭 : char �迭�̸�[]
	char text[16] = "Hello World!";
	// ���ڿ� �迭�� ���������� �׻� �ι���(NULL)���ڰ� ���Ե˴ϴ�.
	// '\0'

	printf("test = %s\n", text);
	printf("test[13] == null ? = %s \n", (text[13] == '\0') ? "Yes" : "No");

	// ���ڿ� �Է� ���?
	// �Է¹��� ������ �����մϴ�.
	char input[256];
	
	// �Է�
	printf("���ڿ� �Է� : ");
	scanf("%s", input);
	printf("�Է��� ���ڿ� : %s\n", input);
}