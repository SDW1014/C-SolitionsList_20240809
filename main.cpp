#include <iostream>

// [2024-08-17]
// 제목 : LV11 - 플래그 코딩 기법
// 1. 뭐 거창한게 있는건 아니고, 플래그 세워놓고 체크하는 그런 기법을 의미함


int main()
{
	int arr[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
	int flag = 0;

	for(size_t i = 0; i < 8; ++i)
	{
		if(arr[i] == 3)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
		std::cout << "3이 있습니다." << std::endl;
	else
		std::cout << "3이 없습니다." << std::endl;

	

	return 0;
}