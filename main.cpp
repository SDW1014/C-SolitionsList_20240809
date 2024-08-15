#include <iostream>

// [2024-08-15]
// 문제 6번

// 게임 설명
// - 숫자 하나를 입력받고, 
// - 20보다 작은 수를 입력했다면 "더 큰수를 입력하세요" 출력
// - 20보다 큰 수를 입력했다면 "더 작은수를 입력하세요" 출력
// - 20을 입력하였다면 "정답입니다" 출력
// - 이 게임을 총 4번 반복합니다.

int main()
{
	int num;
	std::cin >> num;

	if(num < 20)
		std::cout << "더 큰수를 입력하세요" << std::endl;
	else if(num > 20)
		std::cout << "더 작은수를 입력하세요" << std::endl;
	else if(num == 20)
		std::cout << "정답입니다" << std::endl;

	return 0;
}