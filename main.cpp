#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 6번
// 1. 전역 배열로 3 x 4 크기의 배열을 생성해야 한다.
// 2. input 함수에서 숫자 1개를 입력받고, 그 숫자부터 1씩 증가하는 값으로 배열을 채운다.
//    예를 들어, 입력받은 숫자가 2라면 배열은 다음과 같이 채워진다:
//    | 2 | 3 | 4 | 5 |
//    |---|---|---|---|
//    | 6 | 7 | 8 | 9 |
//    |10 |11 |12 |13 |
// 3. process 함수에서 배열의 모든 요소에 1씩 더해야 한다.
// 4. output 함수에서 배열의 모든 값을 출력해야 한다.

int arr[3][4];

void input()
{
	int inputNum;
	std::cin >> inputNum;

	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 4; ++j)
			arr[i][j] = inputNum + (i * 4) + j;
}

void process()
{
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 4; ++j)
			arr[i][j] = arr[i][j] + 1;
}

void output()
{
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	input();
	output();
	process();
	output();

	return 0;
}