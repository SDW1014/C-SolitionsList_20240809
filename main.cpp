#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 6번 
// 2차원 배열을 생성하고, 2중 for문을 사용하여 번호 순서대로 채운다.
// 배열의 크기는 4x4로 설정하고, 각 요소에 번호를 채운 후 출력한다.

int main()
{
	int arr[4][4] = {0};

	for(size_t i = 0; i < 4; ++i)
		for(size_t j = 0; j < 4; ++j)
			arr[i][j] = 13 + i - (j * 4);

	for(size_t i = 0; i < 4; ++i)
	{
		for(size_t j = 0; j < 4; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}