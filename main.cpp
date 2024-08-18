#include <iostream>

// [2024-08-19]
// 제목 : LV14 - 연습문제

// 문제 13번
// 1. char 변수 2개를 선언한다.
// 2. 사용자로부터 문자 2개를 입력받는다.
// 3. 각 char 변수를 가리키는 포인터 2개를 선언한다.
// 4. 포인터를 사용하여 두 char 변수를 SWAP 한다.
// 5. SWAP된 결과를 출력한다.


int main()
{
	char ch1, ch2;
	std::cin >> ch1 >> ch2;

	char* ptr1 = &ch1;
	char* ptr2 = &ch2;

	std::cout << *ptr1 << " " << *ptr2 << std::endl;

	char temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	std::cout << *ptr1 << " " << *ptr2 << std::endl;

	return 0;
}