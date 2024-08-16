#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 3번 분석:
// 1. 5칸 char 배열을 선언해야 한다.
// 2. int형 변수 n에 1부터 5 사이의 숫자를 입력받는다.
// 3. n번 반복하여 n개의 문자를 배열에 입력받는다.
// 4. 입력받은 배열의 값만 출력해야 한다.
// 5. 예시: n이 3일 경우, 3개의 문자를 입력받고 출력해야 한다.

int main()
{
	char arr[5] = {' ', ' ', ' ', ' ', ' '};

	std::cout << "숫자를 입력하세요 (1~5): ";
	int n = 0;
	std::cin >> n;

	for(int i = 0; i < n; ++i)
		std::cin >> arr[i];

	for(int i = 0; i < n; ++i)
	{
		if(arr[i] == ' ')
			continue;
		std::cout << arr[i];
	}

	return 0;

}