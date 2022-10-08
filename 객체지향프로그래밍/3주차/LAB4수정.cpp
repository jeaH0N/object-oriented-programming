#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int num;//잔수
	int total = 0;//판매 총 금액
	int order;//현재 주문한 금액

	char menu[100];

	cout << "espresso 2000원, americano 2300원, cappuccino 2500원입니다." << endl;
	
	 while (1);
	{
		cout << "주문>>";
		cin >> menu >> num;
		if (strcmp(menu, "espresso") == 0)
		{
			order = 2000 * num;
			cout << 2000 * num << " 원 입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(menu, "americano") == 0)
		{
			order = 2300 * num;
			cout << 2300 * num << " 원 입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(menu, "cappuccino") == 0)
		{
			order = 2500 * num;
			cout << 2500 * num << " 원 입니다. 맛있게 드세요" << endl;
		}
		else
		{
			order = 0;
		}
		if (order > 0) {
			cout << order << "원입니다. 맛있게 드세요" << endl;
		}
		else {
			cout << "없는 커피입니다. 다시 입력해주세요." << endl;
		}
		total += order;
		if (total > 20000) 
		{
			cout << "오늘" << total << "판매, 영업 종료" << endl ;
			
		}
	}
	return 0;
}
