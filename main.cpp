#include <iostream>

// [2024-08-12]
// 문제 7번
// 변수 a, x를 만들고, 각 변수에 숫자를 입력 받아주세요. (숫자 2개 입력)
// a보다 작은 수를 x개 만큼 출력 해주세요.
// ex)
// a 입력 : 17
// x 입력 : 3
// 17보다 작은 수 3개를 출력하면 됩니다.
// 출력결과 : 16 15 14

int main()
{
	int a, x;

	std::cin >> a >> x;

	for(int i = 1; i <= x; ++i)
		std::cout << a - i << " ";
	std::cout << std::endl;

	return 0;
}