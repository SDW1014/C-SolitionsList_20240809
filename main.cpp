#include <iostream>

// [2024-08-15]
// 문제 12번

// 숫자 1개를 입력받으세요
// - 만약 3 또는 5 또는 7을 입력 받았다면 1 ~ 10까지 출력 (for문 사용)
// - 그렇지 않고 만약 0 또는 8을 입력받았다면 10 ~ 1까지 출력 (for문 사용)
// - 두 조건이 모두 성립하지 않다면 BBQ 함수를 호출 해 주세요.

// BBQ 함수
// - 만약 입력받은 값이 0 < x < 5 이면, "**초기값**" 출력
// - 만약 6 < x < 10 이면, "**중간값**" 출력
// - 모두 아니라면 "**알수없는값**" 출력

// 입력 예시: 8
// 출력 예시: 10987654321

void BBQ(int num)
{
	if (num >= 0 && num < 5)
		std::cout << "**초기값**";
	else if (num >= 6 && num < 10)
		std::cout << "**중간값**";
	else
		std::cout << "**알수없는값**";
}

int main()
{
	int num;
	std::cin >> num;

	switch (num)
	{
	case 3:
	case 5:
	case 7:
		for (int i = 1; i <= 10; i++)
			std::cout << i;
		break;
	case 0:
	case 8:
		for (int i = 10; i >= 1; i--)
			std::cout << i;
		break;
	default:
		BBQ(num);
	}

	return 0;
}