#include <iostream>

// [2024-08-26]
// 제목 : LV15 - 연습문제

// 문제 11번
// 2차배열에 다섯 문장을 입력받아 가장 긴 문장을 출력하는 프로그램입니다.
// 1. 2차 배열을 선언하여 문장을 저장합니다.
// 2. 각 문장의 길이를 저장할 int 배열을 선언합니다.
// 3. 사용자로부터 5개의 문장을 입력받고, 각 문장의 길이를 계산하여 length 배열에 저장합니다.
// 4. length 배열에서 최대값을 찾아 해당 인덱스를 이용해 가장 긴 문장을 출력합니다.

int main()
{
	char sentences[5][100];
	int length[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "문장 " << (i + 1) << " 입력: ";
		std::cin >> sentences[i];
		length[i] = strlen(sentences[i]);
	}

	int index = 0;
	for(int i = 1; i < 5; i++)
	{
		if(length[i] > length[index])
			index = i;
	}

	std::cout << "가장 긴 문장: " << sentences[index] << std::endl;
	
	return 0;
}