#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 11번
// 1. 1x5 배열 A, B, C를 생성한다.
// 2. 사용자로부터 숫자 15개를 입력받는다.
// 3. 배열 A와 배열 B의 같은 index 값끼리 곱한다.
// 4. 배열 C의 같은 index끼리 합산한 결과를 출력한다.

int main()
{
	int arr[3][5];

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 5; j++)
			std::cin >> arr[i][j];

	for(int i = 0; i < 5; i++)
		std::cout << (arr[0][i] * arr[1][i]) + arr[2][i] << " ";

	return 0;
}