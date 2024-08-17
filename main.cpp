#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 9번 
// 사용자로부터 숫자 1개를 입력받는다.
// 입력받은 숫자는 run 함수에 전달되어 처리된다.
// run 함수는 3x3 2차 배열을 생성하고, 입력받은 숫자에 따라 배열을 채운다.
// 만약 입력받은 숫자가 10보다 작으면 1부터 9까지 순서대로 배열에 채운다.
// 만약 입력받은 숫자가 10 이상이면 3, 2, 1부터 시작하여 9, 8, 7까지 역순으로 배열에 채운다.
// 배열을 채운 후에는 각 행을 출력한다.

void run(int arr[3][3] ,int num)
{
	if(num < 10)
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 3; j++)
				arr[i][j] = 1 + (j * 3) + j;
	else
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 3; j++)
				arr[i][j] = 3 + (i * 3) - j;
}

int main()
{
	int arr[3][3] = {0};
	int num;

	std::cout << "숫자를 입력하세요 : ";
	std::cin >> num;

	run(arr, num);

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}