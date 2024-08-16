#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 7번
// 1. 3x3 사이즈의 2차원 배열을 선언하고 0으로 초기화해야 한다.
// 2. 사용자로부터 3개의 숫자를 입력받는다: y좌표, x좌표, 넣을 값.
// 3. 입력받은 좌표에 해당하는 배열의 위치에 값을 넣는다.
// 4. 배열의 최종 상태를 출력해야 한다.


int main()
{
	int arr[3][3] = {0};

	int y, x, value;
	std::cin >> y >> x >> value;

	arr[y][x] = value;

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << arr[i][j] << ' ';
		std::cout << std::endl;
	}

	return 0;
}