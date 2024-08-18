#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 2번
// 전역 배열을 하드코딩합니다.
// 배열의 구조는 3x3이며, 각 요소는 다음과 같습니다:
// | A | D | F |
// | Q | W | E |
// | Z | X | C |

// Find 함수는 입력받은 문자가 배열 내에 존재하는지 확인하고,
// 존재할 경우 해당 문자의 행(row)과 열(column) 위치를 포인터를 통해 반환합니다.
// 만약 문자가 배열에 없다면, 행과 열 모두 -1로 설정합니다.

struct loc
{
	int x;
	int y;
};

char array[3][3] = {
    {'A', 'D', 'F'},
    {'Q', 'W', 'E'},
    {'Z', 'X', 'C'}
};

loc Find(char target)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(array[i][j] == target)
			{
				return {j, i};
			}
		}
	}
	return {-1, -1};
}

int main()
{
	char target;
	std::cin >> target;
	loc findTarget = Find(target);
	std::cout << findTarget.x << " " << findTarget.y << std::endl;
	return 0;
}