#include <iostream>

// [2024-08-13]
// 문제 11번
// 6칸짜리 arr배열을 만들어주세요.
// arr[0]에서 arr[2]까지 숫자를 입력 받아 배열에 값을 채워주세요.
// 그 다음 숫자 1개를 더 입력 받고, arr[3]에서 arr[5]까지 입력받은 값부터
// 1씩 증가한 값으로 채워주세요.
// ex)
// [입력]
// 3 2 5
// 4
// [출력]
// 3 2 5 4 5 6


int main()
{
	int arr[6];

	for(int i = 0 ; i < 3; ++i)
		std::cin >> arr[i];

	int a;
	std::cin >> a;

	for(int i = 3; i < 6; ++i)
		arr[i] = a + i - 3;

	for(int i = 0 ; i < 6; ++i)
		std::cout << arr[i] << " ";

	return 0;
}