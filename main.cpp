#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 5번
// 1. 숫자 하나를 입력 받는다. 
// 2. 2차 배열에 아래와 같은 모양으로 값을 채운 후 출력한다. 
// 3. 만약 숫자 1을 입력받았다면 숫자 1부터 값을 아래와 같은 모양으로 채워주세요
// |   |   | 1 | 2 |
// |   | 3 | 4 | 5 |
// | 6 | 7 | 8 | 9 |
// 4. 만약 숫자 2를 입력받았다면 숫자 2부터 값을 아래와 같은 모양으로 채워주세요
// |   |   | 2 |  3 |
// |   | 4 | 5 |  6 |
// | 7 | 8 | 9 | 10 |



int main()
{
	int arr[3][4] = {0};

	int inputIndex = 0;
	std::cin >> inputIndex;
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			if(j > 1 - i)
			{
				arr[i][j] = inputIndex;
				++inputIndex;
			}
		}
	}

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			if (arr[i][j] != 0)
				std::cout << arr[i][j] << " ";
			else
				std::cout << "  ";
		}
		std::cout << std::endl;
	}

	return 0;
}