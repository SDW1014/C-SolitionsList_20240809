#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 변수의 자료형 일치
// 1. 주소값을 저장하는 용도로 void* 를 사용
// 2. 해당 주소로 이동했을 떄 알맞은 크기 만큼 접근하기 위해서 포이넡 변수의 자료형과 실제 변수의 자료형을 맞춰야 한다.

int main()
{
	int number = 0;

	void* p = &number;

	int* numberCopy = &number;
	*numberCopy = 100;

	char ch = 'A';
	char* pCh = &ch;

	return 0;
}