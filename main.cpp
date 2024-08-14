#include <iostream>

// [2024-08-15]
// 문제 4번 
// 다음 char 배열을 하드 코딩 해 주세요
// | $ | @ | D | A | 9 | # |
// 그리고 for문을 돌려
// 각 문자와 ASCII값을 출력 해 주세요

int main()
{
	char arr[6] = {'$', '@', 'D', 'A', '9', '#'};

	for(int i = 0; i < 6; ++i)
		std::cout << arr[i] << " : " << static_cast<int>(arr[i]) << std::endl;
 
	return 0;
}