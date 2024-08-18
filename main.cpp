#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 7번
// - 전역배열 / 전역변수를 쓰지 않고 푸는 문제입니다
// - main함수에서 문장 2개를 입력받습니다
// - 2개의 문장을 FindABC 함수로 전달합니다
// - FindABC 함수에서는 대문자 A / 대문자 B / 대문자 C를 각각 Counting하는 함수입니다
// - main함수에서는 FindABC함수를 통해서 구한 A, B, C의 개수를 출력합니다

void FindABC(const char (*arr)[100], int& countA, int& countB, int& countC)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 'A') countA++;
			else if (arr[i][j] == 'B') countB++;
			else if (arr[i][j] == 'C') countC++;
		}
	}
}

int main()
{
	char str[2][100];
	int countA = 0, countB = 0, countC = 0;

	std::cout << "문장 2개를 입력하세요: ";
	std::cin >> str[0] >> str[1];

	FindABC(str, countA, countB, countC);

	std::cout << "A: " << countA << ", B: " << countB << ", C: " << countC << std::endl;
	
	return 0;
}