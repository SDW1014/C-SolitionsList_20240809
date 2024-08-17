#include <iostream>

// [2024-08-18]
// 제목 : LV11 - 복습문제

// 문제 8번
// 1. 지역배열을 정의해야 함.
//    - 배열의 내용은 다음과 같음:
//      | a | b | d |
//      | e | w | z |
//      | q | v | a |
// 2. 대문자 1개를 입력받는 Input 함수가 필요함.
// 3. 입력받은 대문자를 Process 함수에 전달해야 함.
// 4. Process 함수에서는 대문자를 소문자로 변환해야 함.
// 5. 변환된 소문자가 배열에 존재하는지 확인해야 함.
// 6. 존재하면 "존재"를 출력하고, 없으면 "없음"을 출력해야 함.
// 7. 예시: 대문자 A를 입력받으면 소문자 a가 배열에 존재하므로 "존재" 출력.

char Input()
{
	char num;
	std::cout << "대문자를 입력하세요: ";
	std::cin >> num;
	return num;
}

void Process(char arr[3][3], char input)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(arr[i][j] == static_cast<char>(input + 32))
			{
				std::cout << "존재" << std::endl;
				return;
			}
		}
	}
	std::cout << "없음" << std::endl;
}

int main()
{
	char arr[3][3] = { {'a', 'b', 'd'}, {'e', 'w', 'z'}, {'q', 'v', 'a'} };

	char input = Input();

	Process(arr, input);

	return 0;
}