#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 6번
// 1. 배열 5칸을 하드코딩하여 선언하고 초기화합니다.
// 2. 사용자로부터 5개의 숫자를 입력받아 두 번째 배열에 저장합니다.
// 3. CompareGo 함수를 호출하여 두 배열을 전달합니다.
// 4. CompareGo 함수에서 두 배열이 같은지 비교하고 결과를 출력합니다.

const char* CompareGo(int arr1[], int arr2[])
{
	for(int i = 0; i < 5; i++)
	{
		if(arr1[i] != arr2[i])
			return "두 배열은 같지 않음";
	}
	return "두 배열은 완전 같음";
}

int main()
{
	int arr[5] = {3, 5, 1, 2, 7};
	int arr2[5];
	
	for(int i = 0; i < 5; i++)
		std::cin >> arr2[i];

	std::cout << CompareGo(arr, arr2) << std::endl;

	return 0;
}