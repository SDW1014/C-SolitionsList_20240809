#include <iostream>

// [2024-08-15]
// 제목 : 문제 2번

// 숫자 2개를 입력 받기
// 큰 수에서 작은 수를 뺀 결과가 홀수인지 짝수인지 확인

// 홀수일 경우 "고백한다" 출력
// 짝수일 경우 "짝사랑만" 출력

// 주의: 첫번째 숫자가 클 수도 있고 작을 수도 있음

int main()
{
	int a, b;
	std::cin >> a >> b;

	if(b > a)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if((a-b)%2 == 0)
		std::cout << "짝사랑만" << std::endl;
	else
		std::cout << "고백한다" << std::endl;

	return 0;
}