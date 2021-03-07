#include <stdio.h>
// 반환형 -> return 반환값
// 함수명명법 -> 단어 + 단어
// 첫 단어의 첫글자는 대문자로 시작해야 합니다.
int MyAge()
{
	return 15;
}

void main()
{
	int age = MyAge();
	printf("age = %d\n", age);

	printf("함수로 불러옵니다. My Age의 반환값 : %d\n", MyAge());
}