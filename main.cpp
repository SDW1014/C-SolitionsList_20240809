#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 포인터 변수의 원리와 문자열 (문자열 비교)

// 문자열 비교
int main()
{
	char strA[256] = "Hello";
	char strB[256] = "Hello";

	int flag = 0;
	for(size_t i = 0; i < 256; ++i)
	{
		if(strA[i] != strB[i])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
	{
		std::cout << "다르다.";
	}
	else
	{
		std::cout << "같다.";
	}

	return 0;
}