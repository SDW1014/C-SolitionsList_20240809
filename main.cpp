#include <iostream>

// [2024-08-15]
// 제목 : LV6
// 문제 3번
// 숫자 하나를 입력 받아 주세요.
// 입력 받은 숫자 만큼 1 2 3 4 5 를 출력 해 주세요.
// 4를 입력 받았다면
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 를 출력 해 주세요.
// 2중 for문으로 코딩을 해 주세요.


int main()
{
	int num;
	std::cin >> num;

	for(int i = 0; i < num; ++i)
	{
		for(int j = 0; j < 5; ++j)
			std::cout << j + 1 << " ";
		std::cout << std::endl;
	}

	return 0;
}