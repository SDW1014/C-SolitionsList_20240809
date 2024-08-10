#include <iostream>

// 문제 10번
// 숫자 1개를 변수 input에 입력 받으세요.
// 그 숫자가 3보다 크면 1을 더하고 출력 해주세요. (input++;을 활용하세요)
// 그렇지 않으면 1을 빼고 출력 해주세요. (input--;를 활용 하세요)
// [문제] 5 => 6
// [문제] 1 => 0

int main()
{
	int a;

	std::cin >> a;

	if(a > 3)
		a++;
	else
		a--;

	std::cout << a << std::endl;
	
	return 0;
}