#include <iostream>

// [2024-08-15]
// 제목 : LV6
// 문제 5번: 아래의 배열을 하드코딩 해 주세요.
// 배열: B T K A
// 정수형 변수(int)에 숫자 하나를 입력 받아 주세요.
// 입력한 숫자 만큼 위의 배열을 출력 해 주세요.
// 예시: 5를 입력하셨다면
// B T K A
// B T K A
// B T K A
// B T K A
// B T K A

int main()
{
	char arr[4] = {'B', 'T', 'K', 'A'};

	int num;
	std::cin >> num;

	for(int i = 0 ; i < num; ++i)
	{
		for(int j = 0; j < 4; ++j)
			std::cout << arr[j] << " ";
		std::cout << std::endl;
	}

	return 0;
}