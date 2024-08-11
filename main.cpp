#include <iostream>

// [2024-08-11]
// 변수 a, b를 만들고 숫자를 각각 입력 받아주세요.
// 그리고 a부터 b까지의 숫자를 출력 해주세요.
// ex1) 입력: 3 5 출력: 345
// ex2) 입력: 2 6 출력: 23456


int main()
{
	int a,b;

	std::cin >> a >> b;

	for(int i = a; i <= b; ++i)
		std::cout << i; 
	std::cout << std::endl;

	return 0;
}