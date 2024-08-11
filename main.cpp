#include <iostream>

// [2024-08-12]
// 문제 9번
// 1중 for문으로 아래와 같이 출력 하세요

int main()
{
	int nine = 9, six = 6;

	for(int i = 0; i < 4; ++i)
		std::cout << nine - i << " " << six - i << std::endl;

	return 0;
}