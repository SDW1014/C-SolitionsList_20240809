#include <iostream>

// 숫자 3개를 변수 a, b, c에 입력 받으세요.
// 그리고 a를 3번 출력, b를 3번 출력, c를 3번 출력 해주세요.
// ex)
// [입력]
// 3 5 9
// [출력]
// 333
// 555
// 999
// 입력 예시
// 3 5 9

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << a << a << a << std::endl;
	std::cout << b << b << b << std::endl;
	std::cout << c << c << c << std::endl;

	return 0;
}