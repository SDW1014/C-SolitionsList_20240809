#include <iostream>

// [2024-08-15]
// 문제 7번
// - 3 x 2 배열을 선언하여 숫자 6개를 입력받는다.
// - 입력받은 값에 +2를 하여 배열에 저장한다.
// - 이중 for문을 사용하여 배열의 값을 출력한다.
// - 예시: 입력 5 3 6 1 2 3 -> 배열에 7 5, 8 3, 4 5 저장 후 출력

int main()
{
	int arr[3][2];

	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 2; ++j)
		{
			int temp;
			std::cin >> temp;
			arr[i][j] = temp + 2;
		}

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 2; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}