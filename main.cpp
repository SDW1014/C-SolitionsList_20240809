#include <iostream>

// [2024-08-15]
// 문제 11번
// input함수에서 숫자 1개를 입력받아주세요
// 그리고 process함수에서 그 숫자로 부터 1씩 더한 값들을 배열에 채워주세요
// 그리고 output함수에서 출력 해 주세요
// 
// ex) 만약 5를 입력받았다면
// |  3  |  4  |  5  |
// | --- | --- | --- |
// |  6  |  7  |  8  |
// | --- | --- | --- |
// |  9  |  10 |  11 |
// | --- | --- | --- |
// 
// ## 입력 예시
// 3
// ## 출력 예시
// 3 4 5
// 6 7 8
// 9 10 11

void input(int &input)
{
	std::cin >> input;
}

void process(int arr[3][3], int input)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = input + (3 * i) + j;
}

void output(int arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	int num;
	input(num);

	int arr[3][3];
	process(arr, num);
	output(arr);
	
	return 0;
}