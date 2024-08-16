#include <iostream>

// [2024-08-16]
// 제목 : LV9 - 연습 문제 

// 문제 6번
// 3 x 3 배열을 생성하고 A ~ I까지 값을 2중 for문을 사용하여 채운다.
// 배열의 각 요소는 다음과 같이 배치된다:
// | A | B | C |
// | D | E | F |
// | G | H | I |
//
// y, x 좌표 2 쌍을 입력받아 서로의 값을 SWAP한다.
// 입력 예시: 0 0, 1 1
// 출력 예시: 
// EBC
// DAF
// GHI

struct Coord
{
	int y;
	int x;
};

int main()
{
	char arr[3][3] = {};

	for(int i = 0 ; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			arr[i][j] = static_cast<char>('A' + i * 3 + j);

	Coord coord1 = {};
	Coord coord2 = {};

	std::cin >> coord1.y >> coord1.x >> coord2.y >> coord2.x;

	char temp = arr[coord1.y][coord1.x];
	arr[coord1.y][coord1.x] = arr[coord2.y][coord2.x];
	arr[coord2.y][coord2.x] = temp;

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << arr[i][j];
		std::cout << std::endl;
	}

	return 0;
}