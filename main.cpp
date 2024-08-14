#include <iostream>

// [2024-08-15]
// 문제 3번
// 5칸짜리 배열 2개를 만들어주세요.
// 숫자 5개 입력받으면서 배열1과 배열2에 값을 채워주세요.
// 배열1과 배열2에 같은 값을 채우면 됩니다.
// 배열 2개를 모두 출력 해 주세요.

int main()
{
	int arr1[5] = {0};
	int arr2[5] = {0};

	for(int i = 0 ; i < 5; ++i)
	{
		std::cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	for(int i = 0; i < 5; ++i)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;

	for(int i = 0; i < 5; ++i)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;

	return 0;
}