#include <iostream>

// [2024-08-12]
// 문제 8번
// 세 문장을 입력받고, 문장의 길이를 출력하는 프로그램을 만들고자 합니다
// main함수에서는 세 문장을 저장할 수 있는 3 x 10 배열을 만들고, 이곳에 세 문장을 입력 받음
// 그리고 CountLine함수에 문장배열을 넘겨줌
// CountLine함수에서는 전달받은 문장배열에 있는 세 문장의 길이를 구하고, 문장과 길이를 출력
// 입력 예시는 DATA, TOPCON, BBQ와 같음
// 출력 예시는 4=DATA, 6=TOPCON, 3=BBQ와 같음

void CountLine(char sentences[3][10])
{
	for(int i = 0 ; i < 3; ++i)
		std::cout << strlen(sentences[i]) << "=" << sentences[i] << std::endl;
}

int main()
{
	char sentences[3][10];

	for(int i = 0 ; i < 3; ++i)
		std::cin >> sentences[i];

	CountLine(sentences);

	return 0;
}