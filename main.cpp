#include <iostream>

// [2024-08-16]
// 제목 : 연습문제

// 문제 1번
// 1. 사용자로부터 숫자 n을 입력받는다.
// 2. 1부터 n까지의 숫자를 출력해야 한다.
// 3. while문을 사용하여 반복문을 구현한다.
// 4. 출력 형식은 공백으로 구분된 숫자들이다.


int main()
{
	int n;
	std::cin >> n;

	int index = 1;
	while(true)
	{
		std::cout << index << " ";
		index++;

		if(n < index) 
			break;
	}

	return 0;
}