#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 7번
// 1. 3 x 3 배열을 생성합니다.
// 2. magic 함수에 배열을 전달하여 배열을 채웁니다.
// 3. output 함수에서 배열을 출력합니다.
// 4. 빈칸은 " " 공백으로 출력합니다.
// 5. magic 함수는 중첩 2중 for문을 사용하여 배열을 채워야 합니다.
// 6. 출력 함수는 배열의 각 요소를 출력하며, 빈칸은 공백으로 대체해야 합니다.

void magic(int (*arr)[3])
{
	int start = 1;
	for(int i = 0; i < 3; i++)
	{
		for(int j = i; j < 3; j++)
		{
			arr[i][j] = start;
			start++;
		}
	}
}

void output(int (*arr)[3])
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
				std::cout << "  ";
			else
				std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int arr[3][3] = {0};
	magic(arr);
	output(arr);
	return 0;
}