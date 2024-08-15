#include <iostream>

// [2024-08-15]
// 제목 : 문제 9번

// 5명의 점수를 입력 받아서 결과를 출력하는 프로그램
// - 점수는 5칸의 배열에 저장
// - 70점 이상이면 "PASS" 출력
// - 50점 이상이면 "RETEST" 출력
// - 50점 미만이면 "FAIL" 출력

// 입력 예시: 90 30 60 30 100
// 출력 예시:
// 1번사람은 90점 PASS
// 2번사람은 30점 FAIL
// 3번사람은 60점 RETEST
// 4번사람은 30점 FAIL
// 5번사람은 100점 PASS

int main()
{
	int scores[5];
	for(int i = 0; i < 5; ++i)
		std::cin >> scores[i];

	for(int i = 0; i < 5; ++i)
	{
		std::cout << i + 1 << "번사람은 " << scores[i] << "점 ";
		switch(scores[i]/10)
		{
		case 10:
		case 9:
		case 8:
		case 7:
			std::cout << "PASS" << std::endl;
			break;
		case 6:
		case 5:
			std::cout << "RETEST" << std::endl;
			break;
		default:
			std::cout << "FAIL" << std::endl;
		}
	}

	return 0;
}