#include <iostream>

// [2024-08-12]
// 문제 2번
// 숫자 입력에 따라 출력하는 프로그램
// 입력 예시: 3 -> 출력: 333, 444, 555
// 입력 예시: 7 -> 출력: 777, 888, 999

int main()
{
	int a; 
	
	std::cin >> a;

	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << a + i;
		std::cout << std::endl;
	}

	return 0;
}