#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void main()
{
	// ���ڿ� ���õ� ����� ����ϱ� ���ؼ�
	// #include <stding.h>
	// ���ڿ� ����
	// strcpy(�����ؼ� ������ ����, ������ ���ڿ�);

	char mystr1[256] = "��մ� �ڵ�";
	char newStr[256];
	strcpy(newStr, mystr1);
	printf("newStr : %s\n", newStr);
	
	// ���ڿ� ��
	// strcmp(���ڿ�1, ���ڿ�2) == 0
	// ���ٸ� 0�� ��ȯ
	printf("�ȳ�!�� �Է��ϼ��� : ");
	char input[256];
	scanf("%s", input);
	if (strcmp(input, "�ȳ�!") == 0)
		printf("�ǰ� �Է��ϼ̽��ϴ�.\n");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.\n");

	// ���ڿ� ����
	// strlen(���ڿ�);
	printf("mystr1 ���� : %d\n", strlen(mystr1));
}