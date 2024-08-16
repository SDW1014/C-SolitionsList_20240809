#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 4번
// 1. 6칸짜리 배열을 하드코딩해야 함.
// 2. 사용자로부터 두 개의 인덱스(a, b)를 입력받아야 함.
// 3. 입력받은 인덱스에 해당하는 배열의 값을 SWAP(교체)해야 함.
// 4. SWAP을 위해 temp 변수를 사용해야 함.
// 5. 배열의 전체 값을 출력해야 함.


int main()
{
	int arr[6] = { 3, 4, 2, 5, 7, 9 };

	int a, b;
	std::cout << "두 개의 인덱스를 입력하세요: ";
	std::cin >> a >> b;

	if(a < 0 || a > 5 || b < 0 || b > 5)
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return 0;
	}

	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

	for(int i = 0; i < 6; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}