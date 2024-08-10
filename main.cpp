#include <iostream>
#include <string>

// 변수 4개를 선언하고 숫자 4개를 입력 받는다.
// 평균을 구하고, 입력받은 숫자들이 평균보다 큰지, 같은지, 작은지 비교한다.
// 예를 들어 10 11 12 13 을 입력했을 때 평균은 11 이고,
// 출력 결과는 다음과 같다:
// 10<11
// 11==11
// 12>11
// 13>11

std::string avgChecker(int a, int average)
{
    if (a < average) {
        return std::to_string(a) + "<" + std::to_string(average);
    } else if (a == average) {
        return std::to_string(a) + "==" + std::to_string(average);
    } else {
        return std::to_string(a) + ">" + std::to_string(average);
    }
}

int main()
{
	int a, b, c, d;

	std::cin >> a >> b >> c >> d;

	int average = (a + b + c + d) / 4;

	std::cout << avgChecker(a, average) << std::endl;
	std::cout << avgChecker(b, average) << std::endl;
	std::cout << avgChecker(c, average) << std::endl;
	std::cout << avgChecker(d, average) << std::endl;	
	return 0;
}