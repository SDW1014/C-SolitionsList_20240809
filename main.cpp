#include <iostream>

// [2024-08-15]
// 문제 2번
// 이 프로그램은 char변수에 문자 3개를 입력받아 아스키코드 번호를 출력합니다.
// 사용자가 입력한 문자가 A, B, C일 경우 각각의 아스키코드 번호인 65, 66, 67을 출력합니다.
// 입력 예시: A B C
// 출력 예시: 
// 65
// 66
// 67

int main()
{
	char arr[3];

	for(int i = 0 ; i < 3; ++i)
		std::cin >> arr[i];

	for(int i = 0 ; i < 3; ++i)
		std::cout << static_cast<int>(arr[i]) << " ";
		
	std::cout << std::endl;

	return 0;
}