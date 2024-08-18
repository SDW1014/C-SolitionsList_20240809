#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 5번: 한 문장을 입력받아 알파벳 순서대로 정렬하여 출력하는 프로그램입니다.
// 입력받은 문장의 길이를 알아내고, 각 문자를 정렬하여 출력해야 합니다.
// char 변수는 숫자로 구성되어 있으므로, 이를 활용하여 정렬할 수 있습니다.

int main()
{
	char str[100] = {0};
	std::cout << "문장을 입력하세요: ";
	std::cin >> str;

	std::cout << "입력된 문장: " << str << std::endl;

	for(int i = 0; i < strlen(str); ++i)
	{
		for(int j = 1; j < strlen(str) - i - 1; ++j)
		{
			if(str[j] > str[j + 1])
			{
				char temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}

	std::cout << "정렬된 문장: " << str << std::endl;
	
	return 0;
}