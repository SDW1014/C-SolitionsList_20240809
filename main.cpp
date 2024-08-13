#include <iostream>

// [2024-08-13]
// 문제 6번
// 두 개의 숫자를 입력 받아 해당 인덱스 범위의 배열 값을 출력하는 프로그램입니다.
// 예시: 입력이 3 5일 경우, 배열의 3번 인덱스부터 5번 인덱스까지의 값을 출력합니다.

int main()
{
	int arr[7] = {3,5,1,2,4,6,7};

	int start, end;
	std::cin >> start >> end;

	for(int i = start; i < end; ++i)
		std::cout << arr[i] << " ";

	return 0;
}