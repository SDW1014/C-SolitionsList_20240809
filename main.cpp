#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 2번
// 놀이동산에 친구들이 줄 서 있습니다. (위 배열을 하드코딩 해 주세요)
// 친구의 이니셜 문자 하나를 입력받고, 그 친구가 몇 번째 Index에서 기다리고 있는지 출력 해 주세요.
// 1. ex) A를 입력받았다면 "**2번 INDEX"**를 출력하면 됩니다.
// 입력 예시: B
// 출력 예시: 3번 INDEX


int main()
{
	char friends[6] = {'D', 'T', 'A', 'B', 'W', 'Q'};

	char friendInitial = ' ';

	std::cin >> friendInitial;

	for(int i = 0; i < 6; ++i)
		if(friends[i] == friendInitial)
		{
			std::cout << i + 1 << "번 INDEX" << std::endl;
			break;
		}

	return 0;
}