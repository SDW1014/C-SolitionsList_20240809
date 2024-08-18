#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 버블정렬, 선택정렬 (선택정렬)

// 선택정렬
int main()
{
	int arr[6] = { 5,3,6,2,1,8 };

	for(int i = 0; i < 6; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	for(int i = 0; i < 6; ++i)
	{
		for(int j = i+1; j < 6; ++j)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(int i = 0; i < 6; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}