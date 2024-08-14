#include <iostream>

// [2024-08-15]
// 문제 7번
// 숫자 하나를 입력 받아 주세요.
// 3을 입력 받았다면 ###를 3번 출력 해 주세요.
// 4를 입력 받았다면 ####를 4번 출력 해 주세요.
// 꼭 2중 for문으로 작성 해 주세요.

int main()
{
	int num; 
	std::cin >> num;

	for(int i = 0 ; i < num; ++i)
	{
		for(int j = 0; j < num; ++j)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	return 0;
}