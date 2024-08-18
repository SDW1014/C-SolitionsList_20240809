#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

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