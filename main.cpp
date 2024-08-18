#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 4번 
// KFC 함수는 최대 10글자의 문장을 입력받고, 대문자와 소문자의 개수를 세는 기능을 수행합니다.
// 포인터를 사용하여 대문자와 소문자의 개수를 main 함수로 전달합니다.

void KFC(int* UpperCount, int* LowerCount)
{
	char input[11];
	std::cout << "문장을 입력하세요 (최대 10글자): ";
	std::cin >> input;

	for(int i = 0 ; input[i] != '\0' ; i++)
	{
		if(input[i] >= 'A' && input[i] <= 'Z')
			(*UpperCount)++;
		else if(input[i] >= 'a' && input[i] <= 'z')
			(*LowerCount)++;
	}
}

int main()
{
	int UpperCount = 0;
	int LowerCount = 0;
	
	KFC(&UpperCount, &LowerCount);

	std::cout << "대문자 " << UpperCount << "개" << std::endl;
	std::cout << "소문자 " << LowerCount << "개" << std::endl;
	return 0;
}