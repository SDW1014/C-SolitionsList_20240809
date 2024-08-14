#include <iostream>

// [2024-08-15]
// 문제 9번
// 아래의 배열을 하드코딩 해 주세요 {5 4 1 2 7 8}
// 숫자 하나를 입력해 주세요.
// 배열을 Last Index의 값부터 Start Index의 값까지 출력 하는데,
// 이를 입력받은 숫자만큼 반복해서 출력 해 주세요.
// 입력 예시: 5
// 출력 예시: 8 7 2 1 4 5

int main()
{
	int arr[6] = {5, 4, 1, 2, 7, 8};

	int input = 0;
	std::cin >> input;

	for(int i = 0; i < input; ++i)
	{
		for(int j = 5; j >= 0; --j)
			std::cout << arr[j] << " ";
		std::cout << std::endl;
	}

	return 0;
}