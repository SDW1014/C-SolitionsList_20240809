#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 5번 
// 2차 배열을 정의하고, 사용자로부터 두 개의 숫자(a, b)를 입력받아야 합니다.
// 입력받은 a와 b에 따라 a줄부터 b줄까지 7로 채우고 출력하는 로직이 필요합니다.

int main()
{
	int arr[6][3] = {0};

	for(size_t i = 0; i < 6; i++)
		for(size_t j = 0; j < 3; j++)
			arr[i][j] = 10 + i + (j * 6);

	int start, end;
	std::cout << "바꿀 시작 줄과 끝 줄을 입력하세요: ";
	std::cin >> start >> end;

	for(size_t i = start - 1; i < end; i++)
		for(size_t j = 0; j < 3; j++)
			if(i >= start && i <= end)
				arr[i][j] = 7;

	for(size_t i = 0; i < 6; i++)
	{
		for(size_t j = 0; j < 3; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}