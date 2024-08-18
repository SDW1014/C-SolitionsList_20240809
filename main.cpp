#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 2번
// 두 개의 char 배열을 선언합니다.
// str1은 최대 4글자 + NULL 문자, str2는 최대 3글자 + NULL 문자입니다.
// 사용자로부터 문자열 입력을 받습니다.
// 각 문자열의 길이를 계산합니다.
// 문자열의 길이를 출력합니다.

int getArrLength(char arr[])
{
	for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
		if(arr[i] == '\0')
			return i;
	return -1;
}

int main()
{
	char str1[5], str2[4];
	std::cin >> str1 >> str2;

	std::cout << "str1의 길이: " << getArrLength(str1) << std::endl;
	std::cout << "str2의 길이: " << getArrLength(str2) << std::endl;

	return 0;
}