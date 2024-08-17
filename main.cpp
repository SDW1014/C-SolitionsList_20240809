#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 4번 
// 1. 2차 배열을 하드코딩합니다.
//    배열의 내용은 다음과 같습니다:
//    | a | b | a | c | z |
//    | c | t | a | c | d |
//    | c | c | c | c | a |

// 2. 문자 1개를 입력받습니다.

// 3. 입력받은 문자의 개수에 따라 출력할 내용을 결정합니다.
//    - 3개 이상이면 "이야"
//    - 5개 이상이면 "와우"
//    - 7개 이상이면 "세상에"
//    - 위 조건에 해당하지 않으면 "이런"을 출력합니다.

int main()
{
	char arr[3][5] = {
		{'a', 'b', 'a', 'c', 'z'},
		{'c', 't', 'a', 'c', 'd'},
		{'c', 'c', 'c', 'c', 'a'}
	};

	char ch;
	std::cout << "문자를 입력하세요: ";
	std::cin >> ch;

	int count = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 5; j++)
			if(arr[i][j] == ch)
				count++;

	if(count >= 3 && count < 5)
		std::cout << "이야" << std::endl;
	else if(count >= 5 && count < 7)
		std::cout << "와우" << std::endl;
	else if(count >= 7)
		std::cout << "세상에" << std::endl;
	else
		std::cout << "이런" << std::endl;

	return 0;
}