#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 1번 
// 4 x 4 배열에 숫자를 번호 순서대로 채우고 출력하기
// 배열의 각 요소는 2의 배수로 채워져야 하며, 
// 첫 번째 행은 2, 10, 18, 26으로 시작한다.
// 각 행의 첫 번째 요소는 이전 행의 첫 번째 요소에 2를 더한 값이다.
// 출력 형식은 각 행을 공백으로 구분하여 출력한다.


int main()
{
	int arr[4][4] = {0};

	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			arr[i][j] = 2 + (i * 2) + (j * 8);

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}