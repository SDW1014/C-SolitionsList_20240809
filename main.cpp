#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 숫자 채우기 연습 [정사각형 배열]

int main()
{
	int arr[3][3] = {0};

	int x, y;

	int t = 1;

	for(y = 0; y < 3; ++y)
		for(x = 0; x < 3; ++x)
		{
			arr[y][x] = t;
			t++;
		}

	for(y = 0; y < 3; ++y)
	{
		for(x = 0; x < 3; ++x)
			std::cout << arr[y][x] << " ";
		std::cout << std::endl;
	}

	return 0;
}