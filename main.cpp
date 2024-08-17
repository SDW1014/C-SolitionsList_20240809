#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 연습문제

// 문제 9번
// 1. 사용자로부터 8개의 문자를 입력받아야 함.
// 2. 입력받은 문자는 배열에 저장됨.
// 3. 대문자는 big 배열에, 소문자는 small 배열에 저장해야 함.
// 4. big 배열과 small 배열은 각각 8칸으로 초기화되어야 함.
// 5. 입력받은 배열을 탐색하여 대문자와 소문자를 분리하여 저장.
// 6. 마지막으로 big 배열과 small 배열의 내용을 출력해야 함.

int main()
{
	char arr[8] = {0};

	std::cout << "8개의 문자를 입력하세요: ";
	for(int i = 0; i < 8; i++)
		std::cin >> arr[i];

	char big[8] = {0};
	char small[8] = {0};

	int bigIndex = 0;
	int smallIndex = 0;
	for(int i = 0; i < 8; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			big[bigIndex] = arr[i];
			bigIndex++;
		}
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			small[smallIndex] = arr[i];
			smallIndex++;
		}
	}

	std::cout << "대문자: " << big << std::endl;
	std::cout << "소문자: " << small << std::endl;

	return 0;
}