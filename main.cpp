#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 2번
// 1. 숫자 6개를 배열에 입력 받기
// 2. 그리고 for문을 이용하여 0번 index 부터 5번 index까지
// 3. 배열 안에 있는 값을 하나씩 출력합니다.
// 4. 만약 출력할 값이 7이 나온다면 중단(break)를 시킵니다.

int main()
{
	int arr[6];

	for(int i = 0; i < 6; ++i)
		std::cin >> arr[i];

	for(int i = 0; i < 6; ++i)
	{
		if(arr[i] == 7)
			break;
		std::cout << arr[i] << " ";
	}

	return 0;
}