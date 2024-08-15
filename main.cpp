#include <iostream>

// [2024-08-15]
// 문제 5번

// 점수를 입력 받고 평가 결과를 출력하는 프로그램을 작성할 예정입니다.

// 1. 사용자에게 점수를 입력 받기 위한 변수 선언
// 2. 점수에 따라 평가 결과를 출력하는 조건문 작성
// 3. 점수에 따른 출력 결과는 다음과 같습니다:
//    - 80 이상: "수"
//    - 70 이상: "우"
//    - 60 이상: "미"
//    - 그 외: "재시도"
// 4. 주석을 통해 코드의 흐름을 설명합니다.

int main()
{
	int score;
	std::cin >> score;

	switch (score / 10)
	{
	case 10:
	case 9:
	case 8:
		std::cout << "수";
		break;
	case 7:
		std::cout << "우";
		break;
	case 6:
		std::cout << "미";
		break;
	default:
		std::cout << "재시도";
	}

	return 0;
}