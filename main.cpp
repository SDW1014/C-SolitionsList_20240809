#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 5번
// int x, int y가 들어가 있는 구조체 ABC를 정의하고,
// ABC 구조체 변수 t를 선언 해 주세요
// t.x와 t.y에 두 수를 입력받고 합을 출력 해 주세요

struct ABC
{
	int x;
	int y;
};

int main()
{
	ABC t;

	std::cin >> t.x >> t.y;
	std::cout << t.x + t.y << std::endl;

	return 0;
}