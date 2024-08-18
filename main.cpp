#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 버블정렬, 선택정렬 (버블정렬)

// 버블정렬
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
		for(int j = 0; j < 6 - i - 1; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
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