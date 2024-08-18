#include <iostream>

// [2024-08-18]
// 제목 : LV12

// 1. 문자열
// 문자 : 글자 한 글자 를 뜻하는 의미다. ('A', 'B', 'C')
// 문자열 : 문자들의 집합을 뜻하는 의미다. ("ABC", "DEF", "GHI")
// char str[5] : 는 4개의 글자 까지만 저장 할 수 있고 마지막에는 NULL 문자('\0')가 자동으로 추가된다.

// 1.2 : 2중 for문과 2차원 배열
int main()
{
	int arr[3][3] = {};
	int num = 1;
	for(size_t y = 0; y < 3; ++y)
	{
		for(size_t x = 0; x < 3; ++x)
		{
			arr[y][x] = num;
			num++;
		}
	}

	int arr2[3][3] = {};
	int num2 = 1;
	for(size_t y = 0; y < 3; ++y)
	{
		for(size_t x = 2-y; x < 3; ++x)
		{
			arr2[y][x] = num2;
			num2++;
		}
	}

	for(size_t y = 0; y < 3; ++y)
	{
		for(size_t x = 0; x < 3; ++x)
			std::cout << arr[y][x] << " ";
		std::cout << std::endl;
	}

	for(size_t y = 0; y < 3; ++y)
	{
		for(size_t x = 0; x < 3; ++x)
			std::cout << arr2[y][x] << " ";
		std::cout << std::endl;
	}
	return 0;
}