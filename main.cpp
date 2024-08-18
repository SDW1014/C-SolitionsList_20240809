#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 14번
// 요구사항을 분석해보면, 
// 두 개의 문자열을 입력받아 같은 인덱스에 있는 문자들을 비교하여 다른 문자의 개수를 세는 프로그램을 작성해야 합니다.
// 최대 8글자의 문자열을 입력받아야 하며, 두 문자열의 길이는 같아야 합니다.
// 입력 예시로 "BackLog"와 "BackBt"를 주었을 때, 인덱스 4에서 'L'과 'B'가 다르므로 총 3개의 다른 문자가 출력됩니다.

int main()
{
	char str[2][256] = {0};

	std::cout << "두 개의 문자열을 입력하세요: ";
	std::cin >> str[0] >> str[1];

	int maxLength = (strlen(str[0]) > strlen(str[1])) ? strlen(str[0]) : strlen(str[1]);

	int count = 0;
	for(int i = 0; i < maxLength; i++)
	{
		if(str[0][i] != str[1][i])
		{
			count++;
		}
	}

	std::cout << "다른 문자의 개수: " << count << std::endl;

	return 0;
}