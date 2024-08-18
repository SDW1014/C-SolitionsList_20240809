#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 2번
// 문제: 숫자 1개를 입력받아 5번씩 3줄 출력하기
// 입력: 사용자로부터 숫자 1개를 입력받음
// 출력: 입력받은 숫자를 5번 출력하고, 이를 3줄 반복함
// 이중 while문을 사용하여 구현함

int main()
{
	int number;
	std::cin >> number;

	int row = 0;
	
	while (row < 3)
	{
		int count = 0;
		while (count < 5)
		{
			std::cout << number;
			count++;
		}
		std::cout << std::endl;
		row++;
	}
	
	return 0;
}