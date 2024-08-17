#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 1번
// 입력받는 함수 정의
// input() 함수는 숫자 1개를 입력받고 그 숫자를 반환하는 함수입니다.

// 합을 출력하는 함수 정의
// cals() 함수는 숫자 3개를 받고 그 합을 출력해주는 함수입니다.

// main() 함수에서는 input() 함수를 3번 호출하여 숫자 3개를 입력받고,
// 그 숫자 3개를 cals() 함수로 전달해야 합니다.

int input()
{
	int number;
	std::cin >> number;
	return number;
}

int cals(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	int a = input();
	int b = input();
	int c = input();

	std::cout << cals(a, b, c) << std::endl;

	return 0;
}