#include <iostream>

// [2024-08-15]
// 문제 5번
// 숫자 3개를 배열에 입력해 주세요.
// 전체의 합을 구하고, 구한 합 만큼 배열을 반복 출력 해 주세요.
// 예를 들어 3 1 2를 입력 했다면 세 수의 합은 6이므로, 6번 반복 출력하면 됩니다.
// 입력 예시: 3 1 2
// 출력 예시: 
// 3 1 2
// 3 1 2
// 3 1 2
// 3 1 2
// 3 1 2
// 3 1 2

int main()
{
	int arr[3] = {0};
	for(int i = 0 ; i < 3; ++i)
		std::cin >> arr[i];

	int sum = 0;
	for(int i = 0 ; i < 3; ++i)
		sum += arr[i];

	for(int i = 0 ; i < sum; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			std::cout << arr[j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}