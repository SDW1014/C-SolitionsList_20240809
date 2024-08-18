#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 7번 분석:
// 1. 문자열 3개를 입력받는다.
// 2. 각 문자열의 길이를 계산한다.
// 3. 가장 긴 문자열을 찾아 출력한다.
// 4. std::getline 사용 시 오류가 발생하므로, std::string을 사용하기 위해 <string> 헤더를 포함해야 한다.
// 5. std::cin을 사용하여 입력을 받는다.

int getMaxLength(char str[3][256])
{
	int maxLength = 0;
	int maxIndex = 0;
	for (int i = 0; i < 3; i++)
	{
		int length = strlen(str[i]);
		if (length > maxLength)
		{
			maxLength = length;
			maxIndex = i;
		}
	}
	return maxIndex;
}

int main()
{
	char str[3][256];

	for(int i = 0 ; i < 3; ++i)
	{
		std::cout << "문자열을 입력하세요: ";
		std::cin >> str[i];
	}

	int maxLength = getMaxLength(str);
	std::cout << "가장 긴 문자열은 " << str[maxLength] << "입니다." << std::endl;

	return 0;
}