#include <iostream>

// 숫자 4개 a, b, c, d를 입력받아주세요
// a + b를 먼저 출력하고
// c + d를 출력 해주세요
// 그리고 a + b + c + d의 값을 출력 해 주세요

// [입력 예시]
// 2 4 5 10

// [출력 예시]
// a + b = 6
// c + d = 15
// ALL SUM = 21

int main()
{
	int a, b, c, d;
	
	std::cin >> a >> b >> c >> d;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "ALL SUM = " << a + b + c + d << std::endl;

	return 0;
}