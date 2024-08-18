#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 10번
// 1. 2차원 배열을 사용하여 두 개의 문장을 입력받는다. (최대 5글자)
// 2. 12칸짜리 1차원 char 배열을 선언한다.
// 3. 입력받은 두 문장의 길이를 구한다.
// 4. 각 문장의 문자를 1차원 배열에 옮긴다.
// 5. 1차원 배열을 출력하여 두 문장이 합쳐진 결과를 보여준다.

int main()
{
	char sentences[2][6] = {0};
	char combined[12] = {0};

	std::cout << "첫 번째 문장을 입력하세요 (최대 5글자): ";
	std::cin >> sentences[0];
	std::cout << "두 번째 문장을 입력하세요 (최대 5글자): ";
	std::cin >> sentences[1];

	int index = 0;
	for (int i = 0; i < 6 && sentences[0][i] != '\0'; i++) 
	{
		combined[index++] = sentences[0][i];
	}
	for (int i = 0; i < 6 && sentences[1][i] != '\0'; i++) 
	{
		combined[index++] = sentences[1][i];
	}

	std::cout << combined << std::endl;
	return 0;
}