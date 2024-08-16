#include <iostream>

// [2024-08-16]
// 제목 : LV8 - 복습 문제

// 문제 4번
// 1. 17 칸의 긴 배열을 선언해야 한다.
// 2. input 함수에서 문자 3개를 입력받는다.
// 3. 입력받은 첫 번째 문자는 0번 ~ 6번 인덱스에 채운다.
// 4. 두 번째 문자는 7번 ~ 12번 인덱스에 채운다.
// 5. 세 번째 문자는 13번 ~ 16번 인덱스에 채운다.
// 6. 마지막으로 16번 인덱스에서 0번 인덱스까지 거꾸로 출력한다.
// 7. 예시: 'A', 'B', 'C'를 입력받으면 "CCCCBBBBBBAAAAAAA"가 출력된다.


int main()
{
	char arr[17] = {'\0'};

	char a, b, c;
	std::cin >> a >> b >> c;

	for(int i = 0; i < 17; ++i)
	{
		if(i < 7)
			arr[i] = a;
		else if(i < 12)
			arr[i] = b;
		else
			arr[i] = c;
	}

	for(int i = 16; i >= 0; --i)
		std::cout << arr[i];

	return 0;
}