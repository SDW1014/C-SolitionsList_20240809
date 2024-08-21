#include <iostream>

// [2024-08-19]
// 제목 : LV15 - 포인터 변수의 원리와 문자열 (포인터 변수의 활용)

// 포인터 변수의 활용

int strLen(char *ch)
{
	int Length = 0;

	for(size_t i = 0; i < 10; ++i)
	{
		if(ch[i] == '\0')
		{
			Length = i;
			break;
		}
	}
	return Length;
}
int main()
{
	char str[3][10] = {"Hello", "World", "C++"};

	for(size_t i = 0; i < 3; ++i)
	{
		int len = strLen(str[i]);
		std::cout << len << std::endl;
	}

	return 0;
}