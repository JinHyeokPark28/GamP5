#include <stdio.h>
// 함수란?
// 자주 사용하는 기능을 등록해서 자유롭게 사용할 수 있도록
// 만들어주는 기능

// 함수의 기본 모양?
// [반환형] [함수이름] (매개변수) -> 기본 규칙
// 반환값이 존재하지 않는 경우에도 반환형을 지정을 해줘야 합니다.
// 보통 void를 사용합니다.
// 만일 반환값이 존재하는경우 항상 어떠한 값을 되돌려 주어야 합니다.
// 어떠한 값을 되돌주는 것을 '반환'이라고 하며
// return '어떤 값';
int SUM(int a, int b);

void main()
{
	SUM(1, 2);
}

// 함수 선언
// 함수를 사용하는 위치보다 하단에 정의했을 경우
// 사용하는 곳 상단에 함수를 선언해 줘야 한다.
int SUM(int a, int b)
{
	return printf("%d\n", a + b);
}
