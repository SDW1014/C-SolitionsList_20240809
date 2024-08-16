#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 6번
// 1. 문자 하나와 숫자 하나를 입력받는다.
// 2. 입력받은 문자를 숫자만큼 반복하여 출력한다.
// 3. 각 줄에 같은 문자가 반복되어 출력되며, 줄의 수는 숫자와 같다.
// 4. 예를 들어, 'C 2'를 입력받으면 'CC'가 두 줄 출력된다.
// 5. 반복문을 사용하여 출력할 수 있다.
// 6. 입력을 받기 위해 std::cin을 사용하고, 출력은 std::cout을 사용한다.


int main()
{
	char a; 
	int b;
	std::cin >> a >> b;

	for(int i = 0; i < b; ++i)
	{
		for(int j = 0; j < b; ++j)
			std::cout << a;
		std::cout << std::endl;
	}

	return 0;
}