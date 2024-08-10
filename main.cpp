#include <iostream>

// 아래의 소스코드를 Visual Studio에 복사 해 주세요.
// 그리고 F10을 눌러 트레이스 연습을 해 주시면 됩니다.
// 특히 조사식에는 변수 a를 등록해서 a값이 어떻게 변하는지 확인 해 보셔야 합니다.
// 트레이스의 단축키 : F10
// 트레이스 종료 단축키 : Shift + F5

using namespace std;

int main()

{

		int a;
		a = 8;

		cout << a;
		a = a + 1;

		a++;
		a = 3;
		a = a + 1;
		a++;

		cout << "a값은 : " << a << endl;
		a = a + 1;
		a++;
		cout << "마지막 a값은 : " << a << endl;
		return 0;
}