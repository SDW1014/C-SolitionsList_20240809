#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 4번
// 숫자 6개를 입력받아 내림차순으로 정렬하는 프로그램
// 1. 사용자로부터 6개의 숫자를 입력받는다.
// 2. 선택 정렬 알고리즘을 사용하여 숫자를 내림차순으로 정렬한다.
// 3. 정렬된 숫자를 출력한다.

int main()
{
	int arr[6] = {0};
	for(int i = 0; i < 6; ++i)
		std::cin >> arr[i];

	for(int i = 0; i < 6; ++i)
		for(int j = i + 1; j < 6; ++j)
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	for(int i = 0; i < 6; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}