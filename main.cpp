#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 8번
// - 세 문장을 저장할 수 있는 3 x 10 배열을 생성
// - 사용자로부터 세 문장을 입력받음
// - CountLine 함수를 호출하여 문장 배열을 전달
// - CountLine 함수는 각 문장의 길이를 계산하고 출력

void CountLine(char (*arr)[10])
{
	for(int i = 0; i < 3; ++i)
	{
		int length = strlen(arr[i]);
		std::cout << length << "=" << arr[i] << std::endl;
	}
}

int main()
{
	char sentences[3][10];
	for(int i = 0; i < 3; ++i)
		std::cin >> sentences[i];

	CountLine(sentences);

	return 0;
}