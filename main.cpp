#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 7번
// 7칸짜리 int형 배열을 생성해야 합니다.
// 배열에 숫자 7개를 입력받는 과정이 필요합니다.
// 입력받은 숫자들은 배열에 저장되어야 합니다.
// 이후, 배열에서 MAX값과 MIN값을 찾아야 합니다.
// MAX값은 배열의 요소 중 가장 큰 값이며, MIN값은 가장 작은 값입니다.
// 마지막으로, MAX와 MIN값을 출력해야 합니다.

int main()
{
	int arr[7] = {0};

	for(size_t i = 0; i < 7; i++)
		std::cin >> arr[i];

	int max = 0;
	int min = 999999999;

	for(size_t i = 0; i < 7; i++)
	{
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}

	std::cout << "MAX : " << max << std::endl;
	std::cout << "MIN : " << min << std::endl;

	return 0;
}