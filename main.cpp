#include <iostream>

// [2024-08-15]
// 문제 4번
// 3 x 5 char 2차배열을 만들어주세요
// 그리고 문자 1개를 입력받아주세요
// 입력받은 문자부터 1씩 증가하는 문자들을 배열에 꽉 채워주세요
// 예로들어 'B'를 입력받았다면
// | B | C | D | E | F |
// | G | H | I | J | K |
// | L | M | N | O | P |
// 그 다음 **좌표 (2,2)에 있는 문자를 소문자로 바꾸어서 출력** 해 주시면 됩니다.
// **[TIP] 좌표를 나타낼 때는 y부터 표현합니다. (y, x)**
// 예로들어 (1, 3)라는 뜻은
// (0, 0)부터 시작해서 y축으로 1번, x축으로 부터 3번 index라는 뜻입니다.
// | (0,0) |  |  |  |  |
// |  |  |  | (1,3) |  |
// |  |  |  |  |  |

int main()
{
	char arr[3][5] = {0};
	
	char input;
	std::cin >> input;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			arr[i][j] = static_cast<char>(input + j + (i * 5));
		}
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "(2, 2) : " << static_cast<char>((int)arr[2][2] + ('a' - 'A')) << std::endl;

	return 0;
}