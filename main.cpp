#include <iostream>

//문제 5번
//숫자 2개를 입력받으세요
//그리고 그 차를 구해서 출력 해 주세요
//차이 : [앞 숫자] - [뒷 숫자]

int main()
{
	int a, b;
	
	std::cin >> a >> b;
	
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	return 0;
}