#include <iostream>

// [2024-08-26]
// 제목 : LV15 - 연습문제

// 문제 10번
// 1. 마을 사람들의 알파벳을 하드코딩한 1차원 배열을 생성한다.
// 2. 블랙리스트를 입력받는다.
// 3. 블랙리스트의 각 문자를 확인하여 마을 사람인지 외부 사람인지 판별한다.
// 4. 결과를 출력한다.
// 5. std::vector와 std::string을 사용하기 위해 <vector>와 <string> 헤더 파일을 포함해야 한다.

bool findBlackList(char (*livePerson), char target)
{
	for(int i = 0; i < 7; ++i)
	{
		if(livePerson[i] == target)
			return true;
	}
	return false;
}

int main()
{
	char livePerson[7] = {'A', 'B', 'C', 'Z', 'E', 'T', 'Q'};

	char blackList[5];
	std::cout << "블랙리스트 5명을 입력하세요: ";
	for(int i = 0; i < 5; ++i)
		std::cin >> blackList[i];

	for(int i = 0; i < 5; ++i)
	{
		if(findBlackList(livePerson, blackList[i]))
			std::cout << blackList[i] << "=마을사람" << std::endl;
		else
			std::cout << blackList[i] << "=외부사람" << std::endl;
	}

	return 0;
}