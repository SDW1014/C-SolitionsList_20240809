#include <iostream>

// [2024-08-15]
// 문제 4번

// 1. 숫자 5개를 입력받을 배열 선언
// 2. for문을 사용하여 배열에 숫자 입력
// 3. 배열 안에서 3 ~ 7 사이의 숫자 카운팅
// 4. 카운팅 결과 출력

// 입력 예시: 1 2 3 4 5
// 출력 예시: 3

int main()
{
	int arr[5];
	for(int i = 0; i < 5; ++i)
		std::cin >> arr[i];


	int count = 0;
	std::cout << "숫자 5개 입력: ";
	for(int i = 0; i < 5; ++i)
	{
		if(arr[i] >= 3 && arr[i] <= 7)
			++count;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "3 ~ 7 사이의 숫자 개수: " << count << std::endl;

	return 0;
}