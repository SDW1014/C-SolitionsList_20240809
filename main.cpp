#include <iostream>

// 변수 t를 만든다. 
// 변수에 5를 넣는다.
// 그리고 1씩 증가하는걸 출력하고
// 2씩 감소하는걸 출력하라


int main()
{
	int t = 5; 
	
	for (int i = 0; i < 3; ++i)
		std::cout << t + i << std::endl;

	for (int i = 0; i < 5; i+=2)
		std::cout << t - i << std::endl;
	
	return 0;
}