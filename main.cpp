#include <iostream>

// [2024-08-15]
// 문제 10번 
// 대문자 3개를 배열에 입력받고, 첫번째 문자가 사전순으로 가장 뒤에 있는지 확인하는 프로그램
// 입력 예시: Q C C
// 출력 예시: 옳다Q 또는 옳지않음

int main()
{
	char arr[3] = {0};

	for(int i = 0; i < 3; ++i)
		std::cin >> arr[i];

	if(arr[0] > arr[1] && arr[0] > arr[2])
		std::cout << "옳다" << arr[0] << std::endl;
	else
		std::cout << "옳지않음" << std::endl;

	return 0;
}