#include <iostream>

// [2024-08-12]
// 문제 9번
// 최대 5글자인 문장 4개를 입력받아 2차 배열에 저장합니다.
// 입력받은 문장에서 알파벳 A와 B가 모두 존재하면 "대발견"을 출력합니다.
// 알파벳 A 또는 B 중 하나만 존재하면 "중발견"을 출력합니다.
// 알파벳 A와 B가 모두 존재하지 않으면 "미발견"을 출력합니다.
//
// 입력 예시:
// SHOW
// YOUR
// JASON
// DATA
//
// 출력 예시:
// 중발견

int main()
{
	char arr[4][20];

	for(int i = 0 ; i < 4; ++i)
		std::cin >> arr[i];

	bool a_exist = false, b_exist = false;

	for(int i = 0 ; i < 4; ++i)
	{
		for(int j = 0; j < 20; ++j)
		{
			if(arr[i][j] == 'A')
				a_exist = true;
			else if(arr[i][j] == 'B')
				b_exist = true;
		}
	}

	if(a_exist && b_exist)
		std::cout << "대발견" << std::endl;
	else if(a_exist || b_exist)
		std::cout << "중발견" << std::endl;
	else
		std::cout << "미발견" << std::endl;

	return 0;
}