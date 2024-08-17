#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 3번 
// 이 부분에서는 주어진 배열을 하드코딩해야 합니다. 배열의 요소는 'A', '1', '1', '1', '5', 'A', 'w', 'z'입니다.
// 배열을 선언한 후, 사용자로부터 문자를 입력받는 부분이 필요합니다.
// 입력받은 문자의 개수를 세기 위해 변수를 선언해야 합니다.
// 배열을 순회하면서 입력받은 문자가 몇 개 있는지 세어야 합니다.
// 입력받은 문자의 개수에 따라 출력할 내용을 결정합니다.
// 3개 이상 존재하면 "THREE"를 출력하고,
// 2개 존재하면 "TWO"를 출력하며,
// 1개 존재하면 "ONE"을 출력하고,
// 존재하지 않으면 "NOTHING"을 출력해야 합니다.

int main()
{
	char arr[] = {'A', '1', '1', '1', '5', 'A', 'w', 'z'};

	char input;
	std::cout << "찾을 문자를 입력하세요 : ";
	std::cin >> input;

	int count = 0;
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		if (arr[i] == input)
			++count;

	if (count >= 3)
		std::cout << "THREE" << std::endl;
	else if (count >= 2)
		std::cout << "TWO" << std::endl;
	else if (count >= 1)
		std::cout << "ONE" << std::endl;
	else
		std::cout << "NOTHING" << std::endl;

	return 0;
}