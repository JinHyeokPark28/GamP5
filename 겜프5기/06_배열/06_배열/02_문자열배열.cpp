#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void main()
{
	// 문자열 관련된 기능을 사용하기 위해서
	// #include <stding.h>
	// 문자열 복사
	// strcpy(복사해서 저장할 변수, 복사할 문자열);

	char mystr1[256] = "재밌는 코딩";
	char newStr[256];
	strcpy(newStr, mystr1);
	printf("newStr : %s\n", newStr);
	
	// 문자열 비교
	// strcmp(문자열1, 문자열2) == 0
	// 같다면 0을 반환
	printf("안녕!을 입력하세요 : ");
	char input[256];
	scanf("%s", input);
	if (strcmp(input, "안녕!") == 0)
		printf("옳게 입력하셨습니다.\n");
	else
		printf("잘못 입력하셨습니다.\n");

	// 문자열 길이
	// strlen(문자열);
	printf("mystr1 길이 : %d\n", strlen(mystr1));
}