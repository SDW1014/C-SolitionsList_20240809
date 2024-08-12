#include <iostream>

// [2024-08-12]
// 문제 6번: 아래 문장 3개를 하드코딩 해 주세요
// 1. "BBQWORLD"
// 2. "KFCAPPLE"
// 3. "LOT"
// 그리고 문자 1개를 입력받아주세요.
// 세 문장 중에서 입력받은 문자가 몇 개 있는지 출력 해 주세요.
// 예시: 만약 B를 입력받으면 2를 출력하시면 됩니다.

int main()
{
	int answer = 0;
	
	char arr[3][10] = {{"BBQWORLD"},{"KFCAPPLE"}, {"LOT"} };

	char input;
	std::cin >> input;

	for(int i = 0 ; i < 3; ++i)
	{
		for(int j = 0; j < sizeof(arr[i])/ sizeof(arr[i][0]); ++j)
		{
			if(arr[i][j] == input)
				answer++;
		}
	}

	std::cout << answer << std::endl;

	return 0;
}