#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 8번 
// 1. "DATAPOWER"라는 문자열을 하드코딩합니다.
// 2. 사용자로부터 두 개의 정수 a와 b를 입력받습니다. (a <= b)
// 3. 9칸짜리 문자 배열을 생성합니다.
// 4. a부터 b까지의 인덱스에 해당하는 문자들을 새로운 배열에 복사합니다.
// 5. 새로운 배열의 내용을 출력합니다.

int main()
{
	char dataPower[] = "DATAPOWER";
	int a, b;
	std::cin >> a >> b;

	char newArray[9] = {0};
	for (int i = a; i <= b; ++i) 
		newArray[i - a] = dataPower[i];
	
	std::cout << newArray;
	
	return 0;
}