#include <iostream>

// [2024-08-18]
// 제목 : LV13 - 포인터의 활용 (2차원 배열을 포인터 변수로 전달할 경우)

// 2차원 배열을 포인터 변수로 전달할 경우

void kfc2D(int(*pArr2D)[3]/*int pArr2D[3][3]*/)
{
	pArr2D[0][0] = 100;
	pArr2D[0][1] = 100;
	pArr2D[0][2] = 100;

	pArr2D[1][0] = 100;
	pArr2D[1][1] = 100;
	pArr2D[1][2] = 100;

	pArr2D[2][0] = 100;
	pArr2D[2][1] = 100;
	pArr2D[2][2] = 100;
}

void kfc(int* pArr /*int pArr[3]*/)
{
	pArr[0] = 100;
	pArr[1] = 100;
	pArr[2] = 100;
}

int main()
{
	int arr[3][3] = {};
	//int** pArr2D = arr; 틀리다.
	// 2차원 배열을 포인터 변수로 전달할 때는 배열의 크기를 명시해야 한다.
	int(*pArr2D)[3] = arr; // 이렇게 해야 한다.

	// 보통은 1차원배열로 여러번 나누어서 2차원배열을 사용한다.
	// 그러한 가장 큰 이유는 가독성 ( 하나의 함수는 하나의 일만 하도록 만들어야 한다. )
	kfc2D(arr);

	kfc(arr[0]);
	kfc(arr[1]);
	kfc(arr[2]);

	return 0;
}