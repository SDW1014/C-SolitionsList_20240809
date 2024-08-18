#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 12번
// 주어진 배열을 하드코딩하고, 세 번째 줄을 사용자 입력으로 채운다.
// MAX와 MIN 값을 찾아서 각 값의 좌표를 출력한다.
// 예시: 9 0 1 1 을 입력하면 배열이 다음과 같이 된다:
// | 3 | 4 | 1 | 6 |
// | 3 | 5 | 3 | 6 |
// | 9 | 2 | 1 | 1 |
// | 5 | 4 | 6 | 0 |
// MAX는 9, MIN은 0이며, 각각의 좌표를 출력한다.

int main()
{
	int arr[4][4] = {
		{3, 4, 1, 6},
		{3, 5, 3, 6},
		{},
		{5, 4, 6, 0}
	};
	
	for(int i = 0; i < 4; ++i)
		std::cin >> arr[2][i];

	int max = 0;
	int min = 999999999;

	int maxY = 0;
	int maxX = 0;
	int minY = 0;
	int minX = 0;

	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			if(max < arr[i][j])
			{
				max = arr[i][j];
				maxY = i;
				maxX = j;
			}
			if(min > arr[i][j])
			{
				min = arr[i][j];
				minY = i;
				minX = j;
			}
		}
	}

	std::cout << "MAX: " << max << " at (" << maxY << ", " << maxX << ")" << std::endl;
	std::cout << "MIN: " << min << " at (" << minY << ", " << minX << ")" << std::endl;

	return 0;
}