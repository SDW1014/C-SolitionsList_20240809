#include <iostream>

// [2024-08-21]
// 제목 : LV15 - 연습문제

// 문제 1번
// 문제 분석:
// 1. vect라는 배열에 하드코딩된 숫자들을 저장한다.
// 2. 사용자로부터 4개의 숫자를 입력받는다.
// 3. 입력받은 각 숫자가 vect 배열 안에 몇 개 존재하는지 세어서 출력한다.
// 4. std::vector를 사용하기 위해 <vector> 헤더 파일을 포함해야 한다.
// 5. 입력받은 숫자들을 저장할 배열을 선언해야 한다.
// 6. 입력받은 숫자에 대해 vect 배열을 순회하며 개수를 세고 출력해야 한다.


int main()
{
	int vect[7] = {3, 5, 1, 1, 2, 3, 2};

	int inputNumbers[4];
	for(size_t i = 0; i < 4; ++i)
		std::cin >> inputNumbers[i];

	for(size_t i = 0; i < 4; ++i)
	{
		int count = 0;
		
		for(size_t j = 0; j < 7; ++j)
			if(inputNumbers[i] == vect[j])
				count++;

		std::cout << inputNumbers[i] << "=" << count << "개" << std::endl;
	}

	return 0;
}