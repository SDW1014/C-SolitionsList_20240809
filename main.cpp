#include <iostream>

// [2024-08-17]
// 제목 : LV10 - 연습문제

// 문제 11번
// 1. main 함수에서 점수를 입력받아야 합니다.
// 2. scoring 함수를 호출하여 점수에 따라 등급을 리턴받아야 합니다.
// 3. scoring 함수는 점수를 입력받고, 점수에 따라 A, B, C, D를 리턴해야 합니다.
// 4. main 함수에서 scoring 함수의 리턴 값을 출력해야 합니다.

char scoring(int score)
{
	switch (score/10)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	default:
		return 'D';
		break;
	}
}

int main()
{
	int score;
	std::cout << "점수를 입력하세요: ";
	std::cin >> score;
	std::cout << "등급은 " << scoring(score) << "입니다." << std::endl;

	return 0;
}