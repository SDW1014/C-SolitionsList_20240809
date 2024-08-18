#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 9번
// 1. 최대 5글자인 문장 4개를 입력받는다.
// 2. 입력받은 문장을 2차원 배열에 저장한다.
// 3. 각 문장에서 알파벳 A, B의 존재 여부를 확인한다.
// 4. A, B가 모두 존재하면 "대발견" 출력.
// 5. A, B 중 하나만 존재하면 "중발견" 출력.
// 6. A, B가 모두 존재하지 않으면 "미발견" 출력.

int main()
{
	char sentences[4][6];

	for(int i = 0; i < 4; ++i)
		std::cin >> sentences[i];

	int countA = 0;
	int countB = 0;
	for(int i = 0; i < 4; ++i)
	{
		if(strchr(sentences[i], 'A'))
			countA++;
		if(strchr(sentences[i], 'B'))
			countB++;
	}

	if(countA >= 1 && countB >= 1)
		std::cout << "대발견" << std::endl;
	else if(countA >= 1 || countB >= 1)
		std::cout << "중발견" << std::endl;
	else
		std::cout << "미발견" << std::endl;

	return 0;
}