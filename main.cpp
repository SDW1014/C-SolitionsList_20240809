#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 포인터의 활용 (2차원 배열에서 최소,최대값 위치 기억하기)

// 2차원 배열에서 최소,최대값 위치 기억하기

int vect[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

int main()
{
	int min = 987654321;
	int dy = 0;
	int dx = 0;

	for(int y = 0; y < 3; ++y)
	{
		for(int x = 0; x < 3; ++x)
		{
			if(vect[y][x] < min)
			{
				min = vect[y][x];
				dy = y;
				dx = x;
			}
		}
	}
	return 0;
}