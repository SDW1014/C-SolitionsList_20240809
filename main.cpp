#include <iostream>

// [2024-08-18]
// 제목 : LV10 - 복습문제

// 문제 7번
// - 7 x 5 배열을 사용해야 하지만 전역변수는 사용하지 않음.
// - 입력, 처리, 출력 함수가 필요함.
// - main 함수에서 이 함수들을 호출하고 값 전달이 필요함.
// - 입력 예시는 1이고, 출력 예시는 3임.
// - 문제의 요구사항을 충족하기 위해 각 함수의 역할을 정의해야 함.

// 입력 함수 정의
int INPUT() 
{
    // 사용자로부터 값을 입력받는 함수
	int num;
	std::cin >> num;
	return num;
}

// 처리 함수 정의
int PROCESS(int arr[7][5], int inputValue) 
{
    // 입력값을 처리하는 함수
    // 예시로 입력값에 2를 더한 값을 반환할 수 있음
	int count = 0;
	for(int i = 0; i < 7; i++)
		for(int j = 0; j < 5; j++)
			if(j == inputValue && arr[i][j] == 1)
				count++;

	return count;
}

// 출력 함수 정의
void OUTPUT(int value) 
{
    // 처리된 결과를 출력하는 함수
	std::cout << value << std::endl;
}

int main()
{
	int num = INPUT();

	int arr[7][5] = {
		{1, 0, 0, 0, 0},
		{1, 0, 1, 0, 0},
		{1, 1, 0, 1, 0},
		{1, 0, 1, 0, 0},
		{0, 1, 0, 0, 1},
		{0, 0, 0, 1, 0},
		{1, 1, 0, 0, 0}
	};

	int count = PROCESS(arr, num);

	OUTPUT(count);

	return 0;

}