#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 4번
// 숫자 6개를 배열에 입력 받습니다.
// 맨 마지막 칸부터 숫자 7이 나올 때 까지 출력 합니다.
// (주의 : for문을 돌려 숫자 7을 포함해서 출력 해 주세요)
// 입력 예시: 1 2 7 4 9 6
// 출력 예시: 6 9 4 7


int main()
{
	int arr[6];

	for(int i = 0; i < 6; ++i)
		std::cin >> arr[i];

	for(int i = 5; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
		if (arr[i] == 7) break;
	}

	return 0;
}