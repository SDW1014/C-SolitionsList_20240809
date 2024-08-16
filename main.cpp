#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 7번
// 1. 두 개의 1차 배열을 하드코딩하여 생성한다.
//    - 첫 번째 배열: { 'B', 'D', '5', 'Q', 'A' }
//    - 두 번째 배열: { 'Q', 'E', 'R', 'E', 'F' }
// 2. 사용자로부터 문자 1개를 입력받는다.
// 3. 입력받은 문자가 소문자일 경우 첫 번째 배열을 출력한다.
// 4. 입력받은 문자가 대문자일 경우 두 번째 배열을 출력한다.
// 5. 입력받은 문자가 숫자일 경우 "HGFEDCBA"를 출력한다.
// 6. 각 경우에 대한 출력 형식을 명확히 한다.


int main()
{
	char arr1[5] = { 'B', 'D', '5', 'Q', 'A' };
	char arr2[5] = { 'Q', 'E', 'R', 'E', 'F' };

	char input;
	std::cin >> input;

	if (input >= 'a' && input <= 'z')
		for (int i = 0; i < 5; i++)
			std::cout << arr1[i];
			
	else if (input >= 'A' && input <= 'Z')
		for (int i = 0; i < 5; i++)
			std::cout << arr2[i];

	return 0;
}