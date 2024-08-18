#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 6번
//
// 1. 세 개의 문자열 "BBQWORLD", "KFCAPPLE", "LOT"을 하드코딩하여 배열에 저장해야 합니다.
// 2. 사용자로부터 문자 1개를 입력받습니다.
// 3. 입력받은 문자가 세 개의 문자열 중에서 몇 번 나타나는지를 세어야 합니다.
// 4. 최종적으로 그 개수를 출력합니다.
//
// 예를 들어, 사용자가 'B'를 입력하면 "BBQWORLD"에서 2번, "KFCAPPLE"에서는 0번, "LOT"에서는 0번 나타나므로 총 2를 출력해야 합니다.


int main()
{
	char vect[3][10] = {"BBQWORLD", "KFCAPPLE", "LOT"};

	char ch;
	std::cout << "문자를 입력하세요: ";
	std::cin >> ch;

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; vect[i][j] != '\0'; j++)
		{
			if (vect[i][j] == ch)
				count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}