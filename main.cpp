#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 최대값, 최소값 찾기

int main()
{
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	int max = 0;

	for(size_t i = 0; i < 8; ++i)
	{
		if(max < arr[i])
			max = arr[i];
	}

	int min = 987654321;
	for(size_t i = 0; i < 8; ++i)
	{
		if(min > arr[i])
			min = arr[i];
	}

	std::cout << "최대값 : " << max << std::endl;
	std::cout << "최소값 : " << min << std::endl;

	return 0;
}