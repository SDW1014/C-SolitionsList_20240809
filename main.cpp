#include <iostream>

// [2024-08-15]
// 문제 11번
// 문자 두개를 입력 받아 A와 D를 입력 받았다면, A B C D를 4회 반복 출력합니다.
// B와 H를 입력 받았다면, B C D E F G H를 4회 반복 출력합니다.

int main()
{
	char input1, input2;
	std::cin >> input1 >> input2;

	for(int i = 0 ; i < input2 - input1 + 1; ++i)
	{
		for(int j = input1; j <= input2; ++j)
			std::cout << static_cast<char>(j) << " ";
		std::cout << std::endl;
	}

	return 0;
}