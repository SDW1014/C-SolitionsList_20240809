#include <iostream>

// 문제 3번
// 변수 q, w, e를 선언하고 아래와 같이 값을 채워주세요.
// 값은 다음과 같습니다:
// q = 1
// w = 2
// e = 3
// 출력 예시:
// #q=1,1,1
// #w=2,2,2
// #e=3,3,3

int main()
{
	int q = 1, w = 2, e = 3;

	std::cout << "#q=" << q << "," << q << "," << q << std::endl;
	std::cout << "#w=" << w << "," << w << "," << w << std::endl;
	std::cout << "#e=" << e << "," << e << "," << e << std::endl;	

	return 0;
}