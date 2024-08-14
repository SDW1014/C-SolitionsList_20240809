#include <iostream>

// [2024-08-13]
// 문제 12번
// 5칸짜리 배열에 값을 입력받아 채우고, 전체 배열값을 더한 sum값을 구해 출력하는 문제입니다.
// 입력 예시: 1 4 2 1 6
// 출력 예시: 합은 14입니다

int main()
{
	int arr[5];

	for(int i = 0 ; i < 5; ++i)
	{
		std::cin >> arr[i];
	}

	int result = 0;
	for(int i = 0 ; i < 5; ++i)
	{
		result += arr[i];
	}

	std::cout << "합은 " << result << "입니다" << std::endl;

	return 0;
}