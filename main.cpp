#include <iostream>

// [2024-08-15]
// 문제 13번
// 숫자 a b c세개를 입력 받아 주세요.
// a 와 b 사이에 있는 숫자들을 c번 출력 해 주세요.
// 입력 예시: 1 9 2
// 출력 예시: 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	for(int i = 0 ; i < c; ++i)
	{
		for(int j = a; j <= b; ++j)
			std::cout << j << " ";
		std::cout << std::endl;
	}

	return 0;
}