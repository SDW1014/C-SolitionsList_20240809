#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 3번
// 하나의 숫자를 입력 받아 2중 for문을 이용하여 해당 숫자부터 1까지의 숫자를 출력한다.
// 각 숫자는 입력받은 숫자부터 1까지의 숫자에 대해 해당 숫자만큼 반복하여 출력한다.
// 입력받은 숫자를 num 변수에 저장하고, 첫 번째 for문은 num부터 1까지 반복하며,
// 두 번째 for문은 num만큼 반복하여 현재 숫자를 출력한다.

int main()
{
	int num;
	std::cin >> num;

	for(size_t i = num; i >= 1; --i)
	{
		for(size_t j = 0; j < 4; ++j)
			std::cout << i;
		std::cout << std::endl;
	}
	
	return 0;
}