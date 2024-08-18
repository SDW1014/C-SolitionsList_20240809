#include <iostream>

// [2024-08-18]
// 제목 : LV12

// 1. 문자열
// 문자 : 글자 한 글자 를 뜻하는 의미다. ('A', 'B', 'C')
// 문자열 : 문자들의 집합을 뜻하는 의미다. ("ABC", "DEF", "GHI")
// char str[5] : 는 4개의 글자 까지만 저장 할 수 있고 마지막에는 NULL 문자('\0')가 자동으로 추가된다.

// 1.1 : 문자열의 길이를 구하는 함수
char str[256] = "Hello World!!";

int strLen()
{
	for(size_t i = 0; i < sizeof(str)/sizeof(str[0]); ++i)
		if(str[i] == '\0')
			return i;
	return -1;
}

int main()
{
	int len = strLen();
	std::cout << "문자열의 길이 : " << len << std::endl;

	return 0;
}