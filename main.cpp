#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 8번
// 1. 6 x 3 배열을 생성해야 한다.
// 2. 사용자로부터 두 개의 숫자를 입력받는다.
// 3. 배열의 윗부분(상반부)은 첫 번째 숫자로 채우고,
//    아랫부분(하반부)은 두 번째 숫자로 채운다.
// 4. 2중 for문을 사용하여 배열을 채운다.
// 5. 채운 배열을 출력한다.

int main()
{
	int arr[6][3] = {0};
	int top, bottom;

	std::cin >> top >> bottom;

	for(int i = 0; i < 6; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			if(i < 3)
				arr[i][j] = top;
			else
				arr[i][j] = bottom;
		}
	}

	for(int i = 0; i < 6; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << arr[i][j] << ' ';
		std::cout << std::endl;
	}

	return 0;
}