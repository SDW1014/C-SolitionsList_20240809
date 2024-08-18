#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 포인터의 활용 (최대값 최소값 찾기)

// 최대값 최소값 찾기
#include <map>
int main()
{
	int vec[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = 0;
	int min = 987654321;

	int maxIdx = -1;
	int minIdx = -1;

	for(int i = 0; i < 10; ++i)
	{
		if(max < vec[i])
		{
			max = vec[i];
			maxIdx = i;
		}
		if(min > vec[i])
		{
			min = vec[i];
			minIdx = i;
		}
	}
	return 0;
}