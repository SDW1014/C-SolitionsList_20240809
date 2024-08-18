#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 연습문제

// 문제 3번 
// 1. main 함수에서 사용자로부터 문장을 입력받는다.
// 2. stringLen이라는 함수를 정의한다.
// 3. stringLen 함수는 입력받은 문장을 매개변수로 받아서 그 길이를 계산한다.
// 4. 계산된 길이를 return 한다.
// 5. main 함수에서 stringLen 함수를 호출하고, 그 결과를 출력한다.
// 6. 출력 형식은 "X글자" 형태로 한다.

int stringLen(char *arr) 
{
	int count = 0;
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
		if(arr[i] != '\0')
			++count;
    return count;
}

int main()
{
	char arr[256] = {};
	std::cin >> arr;

	std::cout << "입력한 문자열의 길이는 " << stringLen(arr) << " 입니다." << std::endl;
	return 0;
}