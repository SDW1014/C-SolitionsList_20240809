#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 9번
// 2차배열 2 x 3 사이즈로 선언 해주세요
// input함수에서 각 배열에 숫자를 입력받아주세요
// process함수에서 각 배열의 요소들의 합을 구해주세요 (sum구하기)
// output함수에서 합을 출력 해 주세요
// 예시: 만약 1 2 3 4 5 6을 입력하였다면
// | 1 | 2 | 3 |
// |---|---|---|
// | 4 | 5 | 6 |
// input함수에서 배열에 값을 채워주세요
// process에서 sum을 구한 후
// output에서 합을 출력 해 주세요
// 출력결과 : 21

void input(int arr[2][3])
{
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			std::cin >> arr[i][j];
}

void process(int arr[2][3], int &sum)
{
	for(int i = 0; i < 2; ++i)
		for(int j = 0; j < 3; ++j)
			sum += arr[i][j];
}

void output(int &sum)
{
	std::cout << sum << std::endl;
}

int main()
{
	int arr[2][3] = {0};
	int result = 0;

	input(arr);
	process(arr, result);
	output(result);

	return 0;
}