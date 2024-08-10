#include <iostream>

// 문제 12번
// 숫자 3개를 입력 받으세요.
// 세 수의 합이 세 수의 곱보다 같거나 크다면 "행운의 수" 출력
// 아니면 "소소한 수" 출력
// 입력 예시: 1 2 3
// 출력 예시: 행운의 수

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if(a + b + c >= a * b * c)
		std::cout << "Lucky Number" << std::endl;
	else
		std::cout << "Small Number" << std::endl;

	return 0;
}