#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 6번 
// 1. vect[100]을 선언합니다.
// 2. 사용자로부터 문장을 입력받습니다.
// 3. 입력받은 문장의 길이를 구합니다.
// 4. 문장의 마지막 문자를 확인하고, 그 문자가 문장 안에 몇 번 등장하는지 세어 출력합니다.
// 5. 대/소문자를 구분하여 카운트합니다.

int main()
{
	char vect[100];
	std::cout << "문장을 입력하세요: ";
	std::cin >> vect;

	int length = 0;
	for(int i = 0; i < sizeof(vect)/sizeof(vect[0]); i++)
	{
		if(vect[i] == '\0')
			break;
		length = i;
	}

	std::cout << "길이 : " << length + 1 << std::endl;

	int count = 0;
	for(int i = 0; i < length; i++)
	{
		if(vect[i] == vect[length])
			count++;
	}

	std::cout << "마지막 문자가 들어간 횟수: " << count << std::endl;
	return 0;
}