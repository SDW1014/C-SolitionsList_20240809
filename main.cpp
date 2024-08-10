#include <iostream>

// 변수 a를 선언해 주세요.
// 변수값 8을 a에 넣어주세요.
// a = a + 1, a++ 를 적절히 이용하여
// a를 12로 만들어 주시면 됩니다.

int main()
{
	int a  = 8; 
	a = a + 1;
	a++;
	a = a + 1;
	a++;
	
	std::cout << "a의 값은 : " << a << std::endl;

	return 0;
}