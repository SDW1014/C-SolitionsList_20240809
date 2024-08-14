#include <iostream>

// [2024-08-15]
// 문제 8번
// 5칸짜리 char 배열 2개를 선언 해주세요.
// 그리고 문자 하나를 입력받아주세요.
// (입력 문자 범위 E ~ V)
// 배열1에는 그 문자 부터 1씩 **증가한** 문자들을 배열에 채워주세요.
// 배열2에는 그 문자 부터 1씩 **감소한** 문자들을 배열에 채워주세요.
// 그리고 배열1과 배열2를 출력하시면 됩니다.
// 만약 G를 입력받았다면 2개의 char 배열에 각각 아래와 같이 채워주시면 됩니다.
// 배열1 (증가하는 문자들 채우기)
// | G | H | I | J | K |
// 배열2 (감소하는 문자들 채우기)
// | G | F | E | D | C |
// 입력 예시: G
// 출력 예시: GHIJK
// GFEDC

int main()
{
	char upArr[5] = {0};
	char downArr[5] = {0};

	char input; 
	std::cin >> input;

	for(int i = 0; i < 5; ++i)
	{
		upArr[i] = static_cast<char>(static_cast<int>(input)+i);
		downArr[i] = static_cast<char>(static_cast<int>(input)-i);
	}

	for(int i = 0; i < 5; ++i)
		std::cout << upArr[i];
	std::cout << std::endl;

	for(int i = 0; i < 5; ++i)
		std::cout << downArr[i];
	std::cout << std::endl;

	return 0;
}