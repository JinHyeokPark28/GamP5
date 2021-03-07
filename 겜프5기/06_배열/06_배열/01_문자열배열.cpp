#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	// 문자열 배열 : char 배열이름[]
	char text[16] = "Hello World!";
	// 문자열 배열의 마지막에는 항상 널문자(NULL)문자가 들어가게됩니다.
	// '\0'

	printf("test = %s\n", text);
	printf("test[13] == null ? = %s \n", (text[13] == '\0') ? "Yes" : "No");

	// 문자열 입력 방법?
	// 입력받을 공간을 생성합니다.
	char input[256];
	
	// 입력
	printf("문자열 입력 : ");
	scanf("%s", input);
	printf("입력한 문자열 : %s\n", input);
}