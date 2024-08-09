#include <iostream>

//1주일이 곧 7일이기에, 절반 이상 운동을 하였으면 칭찬하는 알고리즘을 짜봐라 

int main()
{
    int weekExcerciseDay = 0;
    std::wcout << "당신은 이번주 얼마나 운동을 하셨습니까? : " << std::endl;

    std::cin >> weekExcerciseDay;

    if(weekExcerciseDay >= 7/2 + 1)
    {
        std::wcout << "이번주도 수고하셨습니다." << std::endl;
        return 0;
    }
    std::wcout << "다음주는 분발 하셨으면 좋겠습니다." << std::endl;
    return 0;
}