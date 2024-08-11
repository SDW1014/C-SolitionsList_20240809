#include <iostream>

// [2024-08-11]
// 문제 6번
// 숫자 2개를 입력 받으세요 (두번째 숫자는 첫번째 숫자보다 큽니다)
// 첫번째 숫자부터 두번째 숫자 값 까지 출력 해 주세요
// for (x=시작값; x<=끝값; x++) { /* ... */ }


int main()
{
	int a, b;

	std::cin >> a >> b;

	for(int i = a; i <= b; ++i)
		std::cout << i << std::endl;

	return 0;
}