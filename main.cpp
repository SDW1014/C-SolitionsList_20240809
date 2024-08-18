#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 8번
// 1. 3x3 크기의 2차원 배열을 생성합니다.
// 2. 사용자로부터 숫자를 입력받습니다.
// 3. 입력받은 숫자가 1일 경우, 배열을 특정 규칙에 따라 채워야 합니다.
// 4. 배열을 출력해야 합니다.
// 5. 하지만, 코드로 문제를 풀지 않고 주석으로만 설명합니다.

int main()
{
	int arr[3][3] = {0};

	int input;
	std::cin >> input;

	int index = 1;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			if(j > 1 - i)
			{
				arr[i][j] = index;
				++index;
			}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}