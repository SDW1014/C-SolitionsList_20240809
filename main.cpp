#include <iostream>

// [2024-08-15]
// 문제 7번

// 숫자 3개를 입력받아 가장 큰 값과 가장 작은 값을 출력하는 프로그램
// - MAX값 출력: a, b, c 중 가장 큰 값
// - MIN값 출력: a, b, c 중 가장 작은 값
// - 조건문을 사용하여 최대값과 최소값을 결정

// 입력 예시: 5 3 3
// 출력 예시: MAX=5, MIN=3

void bubbleSort(int arr[])
{
	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0; j < 3-i; ++j)
		{
			if(arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[3];
	for(int i = 0 ; i < 3; ++i)
		std::cin >> arr[i];

	bubbleSort(arr);

	for(int i = 0; i < 3; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "MAX=" << arr[0] << ", MIN=" << arr[2] << std::endl;

	return 0;
}