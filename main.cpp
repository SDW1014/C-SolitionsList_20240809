#include <iostream>

// [2024-08-13]
// 제목 : 문제 7번
// 4칸짜리 data배열이 있습니다.
// 숫자 1개를 입력받아주세요.
// 만약 10을 입력 받으면 아래와 같이 배열에 채워집니다.
// 10 9 8 7
// 그리고 채워진 배열을 출력 하세요.
// 입력 예시: 10
// 출력 예시: 10 9 8 7


int main()
{
	int arr[4];

	int num;
	std::cin >> num;

	int index = 0;
	for(int i = num; i > num-4; --i)
	{
		arr[index] = i;
		++index;
	}

	for(int i = 0 ; i < 4; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}