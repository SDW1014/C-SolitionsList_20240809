#include <iostream>

// [2024-08-18]
// 제목 : LV12 - 연습문제

// 문제 6번
// 전역 배열에 'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T' 문자를 하드코딩합니다.
// Length 함수는 문자 하나를 받아서 해당 문자의 배열 인덱스를 반환합니다.
// main 함수에서는 사용자로부터 문자 3개를 입력받고, 
// Length 함수를 3번 호출하여 각 문자의 인덱스를 출력하는 프로그램을 작성합니다.

char letters[] = {'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T'};

int Length(char c) {
    for (int i = 0; i < 8; i++) {
        if (letters[i] == c) {
            return i;
        }
    }
    return -1;
}

int main()
{
	char c1, c2, c3;
	std::cout << "세 문자를 입력하세요: ";
	std::cin >> c1 >> c2 >> c3;
	std::cout << "첫 번째 문자의 인덱스: " << Length(c1) << std::endl;
	std::cout << "두 번째 문자의 인덱스: " << Length(c2) << std::endl;
	std::cout << "세 번째 문자의 인덱스: " << Length(c3) << std::endl;
	return 0;
}