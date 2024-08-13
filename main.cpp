#include <iostream>

// [2024-08-13]
// 문제 9번
// 두 개의 숫자를 입력받아 배열에 값을 채우고 출력하는 프로그램입니다.
// 첫 번째 숫자는 배열의 0번째 인덱스에 저장되고,
// 두 번째 숫자는 첫 번째 숫자에 더해지는 값으로 사용됩니다.
// 예시: 입력이 1 2일 경우, 배열은 1, 3, 5, 7, 9로 채워집니다.


int main()
{
	int a, b;
	std::cin >> a >> b;

	int arr[5];

	for(int i = 0 ; i < 5; ++i)
		arr[i] = a + (i * b);

	for (int i = 0; i < 5; ++i)
		std::cout << arr[i] << " ";
	
	return 0;
}