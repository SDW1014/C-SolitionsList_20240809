#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 5번 분석:
// 1. 숫자 6개를 입력받는다.
// 2. 입력받은 숫자를 2차원 배열에 저장한다. (3개씩 나누어 2행)
// 3. 0은 '#'으로 바꾸어 출력한다.
// 4. 2중 for문을 사용하여 배열의 값을 출력한다.
// 5. 출력 형식은 각 행마다 숫자 또는 '#'을 출력한다.

int main()
{
	int arr[2][3] = {0};

	for(size_t i = 0; i < 6; ++i)
		std::cin >> arr[i / 3][i % 3];

	for(size_t i = 0; i < 2; ++i)
	{
		for(size_t j = 0; j < 3; ++j)
		{
			if(arr[i][j] == 0)
				std::cout << "#";
			else
				std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}