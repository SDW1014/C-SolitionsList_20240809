#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 1번
// 1. 문장을 입력받는다.
// 2. 입력받은 문장을 5번 출력한다. for이용
// 3. ex) input : "ABC" -> output : "ABCABCABCABC"

int main()
{
	char str[256] = {};
	std::cout << "문장을 입력하세요 : ";
	std::cin >> str;

	for (size_t i = 0; i < 5; ++i)
		std::cout << str << std::endl;
		
	return 0;
}