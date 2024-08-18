#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 7번
// 1. 문자열을 입력받는다. 최대 10글자.
// 2. 추가로 문자 3개를 입력받는다.
// 3. 각 문자가 문자열에 몇 번 존재하는지 세어서 출력한다.
// 4. 문자열의 길이를 구할 때 break 문을 사용해야 한다.

int count(char* str, char target)
{
	int count = -1;
	for(int i = 0; i < strlen(str); ++i)
		if(str[i] == target)
			count++;
	return count;
}

int main()
{
	char str[256];
	std::cout << "문자열을 입력하세요: ";
	std::cin >> str;

	char a, b, c;
	std::cout << "문자 3개를 입력하세요: ";
	std::cin >> a >> b >> c;

	std::cout << a << ": " << count(str, a) << std::endl;
	std::cout << b << ": " << count(str, b) << std::endl;
	std::cout << c << ": " << count(str, c) << std::endl;

	return 0;
}