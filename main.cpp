#include <iostream>

// [2024-08-13]
// 문제 4번
// 일단 함수 2개를 만들어주세요.
// - KFC( ) : "KFC입니다" 출력하는 함수
// - MC( ) : "MC입니다" 출력하는 함수
// 그리고 숫자 하나를 입력받아주세요.
// 입력받은 숫자가 1이라면 KFC 함수를 호출하고
// 입력받은 숫자가 2라면 MC 함수를 호출 해 주세요.

// 입력 예시
// 1
// 출력 예시
// KFC입니다

void KFC()
{
	std::cout << "KFC 입니다." << std::endl;
}
void MC()
{
	std::cout << "MC 입니다." << std::endl;
}

int main()
{
	int num;
	std::cin >> num;

	switch (num)
	{
	case 1:
		KFC();
		break;
	case 2:
		MC();
		break;
	}
	
	return 0;
}