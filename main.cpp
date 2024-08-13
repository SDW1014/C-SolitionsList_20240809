#include <iostream>

// [2024-08-13]
// 문제 5번
// 5칸짜리 arr 배열에 아래의 값을 하드코딩 해 주세요
// 0 1 2 3 4
// 문자 하나를 입력 받고
// 그 문자가 'a' 이거나 'b' 이거나 'c' 라면
// - -> 3번 index 에서 0번 index 까지 출력
// 그렇지 않으면
// - -> 4번 index에서 1번 index 까지 출력 해 주세요.
// 입력 예시: b
// 출력 예시: 3 2 1 4


int main()
{

	int arr[5] = {4,1,2,3,5};

	char input;
	std::cin >> input;

	if(input == 'a' || input == 'b' || input == 'c')
	{
		for(int i = 3; i >= 0; --i)
		{
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		for(int i = 4; i >= 1; --i)
		{
			std::cout << arr[i] << " ";
		}
	}

	return 0;
}