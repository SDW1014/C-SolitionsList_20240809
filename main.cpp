#include <iostream>

// 변수 a를 선언해주세요.
// 변수 a에 8을 넣어주세요.
// a를 5번 곱한 값, a의 5승의 값을 출력해 주세요.

int fivesqure(int a)
{
	return a * a * a * a * a;
}

int main()
{
	int a = 8;

	std::cout << fivesqure(a) << std::endl;

	return 0;
}