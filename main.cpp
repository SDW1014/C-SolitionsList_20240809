#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 7번
// 두 문장을 입력받아 거울문장인지 확인하는 프로그램입니다.
// 최대 10글자의 두 문장을 입력받습니다.
// 입력된 첫 번째 문장을 거꾸로 뒤집어서 두 번째 문장과 비교합니다.
// 만약 두 문장이 같다면 "거울문장"을 출력하고,
// 그렇지 않다면 "거울문장아님"을 출력합니다.
//
// 입력 예시:
// NCQ
// QCN
//
// 출력 예시:
// 거울문장

int main()
{
	char sentence[2][10];
	std::cout << "두 문장을 입력하세요: ";
	for (int i = 0; i < 2; ++i)
		std::cin >> sentence[i];

	if(strlen(sentence[0]) != strlen(sentence[1]))
	{
		std::cout << "거울문장아님" << std::endl;
		return 0;
	}

	for(int i = 0 ; i < strlen(sentence[0]); ++i)
	{
		if(sentence[0][i] != sentence[1][strlen(sentence[0]) - i - 1])
		{
			std::cout << "거울문장아님" << std::endl;
			return 0;
		}
	}

	std::cout << "거울문장" << std::endl;
	return 0;
}