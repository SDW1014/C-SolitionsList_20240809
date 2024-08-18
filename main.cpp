#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 9번
// - 전역변수를 사용하지 않고 2차원 배열을 하드코딩
// - main 함수에서 사용자로부터 2개의 좌표(4개의 숫자)를 입력받음
// - 입력받은 좌표를 Find 함수에 전달하여 해당 값을 찾음
// - 찾은 값을 출력

char Find(int y, int x, char (*arr)[3])
{
	return arr[y][x];
}

int main()
{
	char array[3][3] = {
		{'D', 'A', 'S'},
		{'Q', 'W', 'V'},
		{'R', 'T', 'Y'}
	};

	int y[2];
	int x[2];

	for(int i = 0; i < 2; ++i)
	{
		std::cout << "좌표를 입력하세요 : ";
		std::cin >> y[i] >> x[i];
	}

	for(int i = 0; i < 2; ++i)
	{
		std::cout << Find(y[i], x[i], array) << std::endl;
	}

	return 0;
}