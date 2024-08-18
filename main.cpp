#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 1번 
// NODE 구조체 정의
// NODE라는 구조체는 두 개의 정수형 멤버 x와 y를 가집니다.

// NODE 타입 변수 ta와 tb를 생성합니다.
// ta와 tb는 각각 x와 y 값을 저장하는 구조체입니다.

// ta.x와 tb.x에 각각 숫자를 입력받습니다.
// 사용자에게 ta.x와 tb.x 값을 입력하도록 요청합니다.

// ta.y에는 ta.x + 5 값을 채웁니다.
// ta.y는 ta.x에 5를 더한 값입니다.

// tb.y에는 tb.x - 5 값을 채웁니다.
// tb.y는 tb.x에서 5를 뺀 값입니다.

// 각각의 값들을 출력합니다.
// ta와 tb의 x와 y 값을 출력하여 결과를 보여줍니다.

struct NODE
{
	int x; 
	int y;
};

int main()
{
	NODE ta, tb;
	std::cout << "ta.x와 tb.x 값을 입력하세요 : ";
	std::cin >> ta.x >> tb.x;

	ta.y = ta.x + 5;
	tb.y = tb.x - 5;

	std::cout << "ta.x : " << ta.x << ", ta.y : " << ta.y << std::endl;
	std::cout << "tb.x : " << tb.x << ", tb.y : " << tb.y << std::endl;

	return 0;
}