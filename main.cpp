#include <iostream>

// [2024-08-12]
// 문제 8번
// 변수 a, b, c 에다가 숫자를 각각 1개씩 입력 받으세요.
// a ~ b 까지
// a ~ c 까지
// 출력하는 소스코드를 작성 해주세요.
// ex)
// 3개의 숫자 입력: 3 5 9
// a ~ b 출력: 3 4 5
// a ~ c 출력: 3 4 5 6 7 8 9

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	for(int i = a; i <= b; ++i)
		std::cout << i << " ";
	std::cout << std::endl;

	for(int i = a; i <= c; ++i)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}