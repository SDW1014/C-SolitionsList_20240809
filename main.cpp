#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 2번
// 하드코딩된 배열을 정의합니다.
// 새로운 배열을 정의하고 사용자로부터 입력을 받습니다.
// 각 입력값에 대해 하드코딩된 배열에서 큰 값의 개수를 셉니다.

int main()
{
	int arr1[6] = {10, 50, 40, 20, 30, 40};
	int arr2[6];

	for(size_t i = 0; i < 6; ++i)
		std::cin >> arr2[i];


	for(size_t i = 0; i < 6; ++i)
	{
		size_t count = 0;
		for(size_t j = 0; j < 6; ++j)
			if(arr2[i] < arr1[j])
				count++;
		std::cout << arr2[i] << " = " << count << "개" << std::endl;
	}

	return 0;
}