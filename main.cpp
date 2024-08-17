#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 1번
// 사용자로부터 숫자를 입력받기
// 입력받은 숫자가 짝수인지 홀수인지 확인
// 짝수일 경우 2차원 배열에 값을 채우기
// 홀수일 경우 2차원 배열에 값을 채우기
// 2중 for문을 사용하여 배열의 값을 출력하기


int main()
{
	int num;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> num;

	int arr[4][4] = {0};

	if(num % 2 == 0)
		for(size_t i = 0; i < 4; ++i)
			for(size_t j = 0; j < 4; ++j)
				if(i == j)
					arr[i][j] = i + 1;
	else
		for(size_t i = 0; i < 4; ++i)
			for(size_t j = 0; j < 4; ++j)
				if(i + j == 3)
					arr[i][j] = i + 1;

	for(size_t i = 0; i < 4; ++i)
	{
		for(size_t j = 0; j < 4; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}