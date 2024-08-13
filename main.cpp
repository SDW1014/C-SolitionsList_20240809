#include <iostream>

// [2024-08-13]
// 문제 1번
// 문자 1개를 입력 받으세요
// 그리고 입력받은 문자를 3회 출력하세요

int main()
{
	char input;
	
	std::cin >> input;

	for(int i = 0; i < 3; i++)
	{
		std::cout << input;
	}

	return 0;
}