#include <iostream>

// [2024-08-15]
// 문제 12번
// 전역변수 flag, a, b, c 이렇게 4개의 char변수를 만들어주세요
// input함수에서 문자 3개를 a, b, c 변수에 입력 받으세요
// process함수에서는 만약 입력 받은 문자가 'A' 'B' 'C' 라면 전역변수 flag = 1 넣기
// output함수에서는 만약 flag == 1 이라면, "ABC를찾았다" 출력
// 그렇지 않으면 "못찾았다" 출력

void input(char &a, char &b, char &c)
{
	std::cin >> a >> b >> c;
}

void process(char a, char b, char c, char &flag)
{
	if(a == 'A' && b == 'B' && c == 'C')
		flag = 1;
}

void output(char flag)
{
	if(flag == 1)
		std::cout << "ABC를찾았다" << std::endl;
	else
		std::cout << "못찾았다" << std::endl;
}

int main()
{
	char flag, a, b, c;

	input(a, b, c);
	process(a, b, c, flag);
	output(flag);

	return 0;
}