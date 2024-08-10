#include <iostream>

// 문제 7번
// 변수 a, b에 숫자를 입력 받으세요.
// 만약 변수 a가 b 보다 크다면
// **a가 b보다 크다**
// 를 출력 해 주세요.
// 만약 그렇지 않다면
// **b가 a보다 같거나 크다**
// 를 출력 해 주세요.

int main()
{
	int a, b;
	std::cin >> a >> b;
	if(a > b)
	{
		std::cout << "a가 b보다 크다." << std::endl;
	}
	else
	{
		std::cout << "b가 a보다 같거나 크다." << std::endl; 
	}

	return 0;
}