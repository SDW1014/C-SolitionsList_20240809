#include <iostream>

// [2024-08-17]
// 제목 : LV10 - Return 키워드

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 5; 
	int b = 6;

	int result = Add(a, b);

	std::cout << result << std::endl;

	return 0;
}