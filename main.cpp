#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 포인터를 이용한 값의 복사 [얕은 복사, 깊은 복사]

// 얕은 복사
void swap(int a, int b)
{
	int temp = a;
	a = b; 
	b = temp;
}

// 깊은 복사
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1 = 100;
	int num2 = 200;

	swap(num1, num2);
	std::cout << "얕은 복사 (변경 되지 않음) : ";
	std::cout << "num1 : " << num1 << ", num2 : " << num2 << std::endl;

	swap(&num1, &num2);
	std::cout << "깊은 복사 (변경 됨) : ";
	std::cout << "num1 : " << num1 << ", num2 : " << num2 << std::endl;

	return 0;
}