#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 복습문제

// 문제 3번 
// 전역 배열을 정의합니다.
// 배열의 내용은 다음과 같습니다:
// | D | A | D |
// | Q | W | Q |
// | A | S | D |
// | A | S | D |

// find 함수는 입력된 문자가 배열에 존재하는지 확인합니다.
// 존재하면 "존재"를 출력하고, 없으면 "없음"을 출력합니다.

// main 함수에서 문자 하나를 입력받고 find 함수로 전달합니다.

char grid[4][3] = {
    {'D', 'A', 'D'},
    {'Q', 'W', 'Q'},
    {'A', 'S', 'D'},
    {'A', 'S', 'D'}
};

void find(char ch) {
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
			if (grid[i][j] == ch)
			{
				std::cout << "존재" << std::endl;
				return;
			}
		}
	}
	std::cout << "없음" << std::endl;
}

int main()
{
	char ch;
	std::cin >> ch;
	find(ch);
	return 0;
}