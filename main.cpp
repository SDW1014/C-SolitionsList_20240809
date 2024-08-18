#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 포인터의 활용 (배열을 인자로 함수에 넘기기)

// 배열을 인자로 함수에 넘기기
// 배열 : 다수의 Int 변수의 나열
// 시작 주소만 알면 나머지도 알아 낼 수 있다. 
// 포인터 변수의 주소 자료형의 데이터 크기 만큼 증가한다. 

void bbq(int pArr[10])
{
	*(pArr) = 100;
	*(pArr + 1) = 100;
	*(pArr + 2) = 100;
	*(pArr + 3) = 100;
	*(pArr + 4) = 100;
	*(pArr + 5) = 100;
	*(pArr + 6) = 100;
	*(pArr + 7) = 100;
	*(pArr + 8) = 100;
	*(pArr + 9) = 100;

	pArr[0] = 100;
	pArr[1] = 100;
	pArr[2] = 100;
	pArr[3] = 100;
	pArr[4] = 100;
	pArr[5] = 100;
	pArr[6] = 100;
	pArr[7] = 100;
	pArr[8] = 100;
	pArr[9] = 100;
}

int main()
{
	int vec[10] = {};
	bbq(vec);
	return 0;
}