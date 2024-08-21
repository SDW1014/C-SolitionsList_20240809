#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 9번
// 1. 사용자로부터 최대 10글자의 문자열을 입력받는다.
// 2. 문자열의 홀수번째 문자는 대문자여야 하고, 짝수번째 문자는 소문자여야 한다.
// 3. 입력된 문자열이 이러한 규칙을 따르는지 확인한다.
// 4. 규칙을 따르지 않으면 "일반문장"을 출력하고, 따르다면 "개구리문장"을 출력한다.

int main()
{
	char input[10];
	std::cin >> input;

	for(int i = 0; i < 10; ++i)
	{
		if(i % 2 == 0)
		{
			if(isupper(input[i]))
			{
				std::cout << "일반문장" << std::endl;
				return 0;
			}
		}
		else
		{
			if(islower(input[i]))
			{
				std::cout << "일반문장" << std::endl;
				return 0;
			}
		}
	}

	std::cout << "개구리문장" << std::endl;

	return 0;
}