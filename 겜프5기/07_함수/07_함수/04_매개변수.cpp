#include <stdio.h>
void PrintAge(int age);

void main()
{
	// 매개변수란?
	// 함수를 호출하기 위해서 사용되는 부품, 재료
	// 값을 전달하기 위한 변수
	// 오직 함수 안에서만 사용이 가능합니다.

	// 매개변수 추가법?
	// [반환형][함수이름](자료형 이름, 자료형 이름 ...)
	// {
	// 
	// }
	PrintAge(5);

}
void PrintAge(int age)
{
	printf("저의 나이는 %d살입니다.\n", age);
}