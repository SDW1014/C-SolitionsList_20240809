#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 4번
// 5 x 5 배열을 만들고 전부 0으로 초기화
// 배열을 선언하고 초기화하는 코드가 필요합니다.

// 숫자 1개를 입력받기
// 사용자로부터 숫자를 입력받는 코드가 필요합니다.

// 테두리를 채우기
// 1중 for문을 4번 사용하여 배열의 테두리를 채우는 코드가 필요합니다.

// 배열 출력
// 배열을 출력하는 코드가 필요합니다.

int main()
{
	int arr[5][5] = {0};
	int wallNum;
	std::cout << "벽 숫자를 입력하세요 : ";
	std::cin >> wallNum;

	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			if(i == 0 || i == 4 || j == 0 || j == 4)
				arr[i][j] = wallNum;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(arr[i][j] == wallNum)
				std::cout << arr[i][j];
			else
				std::cout << "_";
		}
		std::cout << std::endl;
	}

	return 0;
}