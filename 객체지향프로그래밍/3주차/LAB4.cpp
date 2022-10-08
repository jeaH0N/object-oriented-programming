#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	string menu;
	int servings, total = 0;
	do {
		cout << "주문>>";
		getline(cin, menu, ' '); // 1
		cin >> servings;
		cin.ignore(); // 2
		if (menu == "에스프레소") {
			cout << 2000 * servings << "원입니다. 맛있게 드세요" << endl;
			total += 2000 * servings;
		}
		else if (menu == "아메리카노") {
			cout << 2300 * servings << "원입니다. 맛있게 드세요" << endl;
			total += 2300 * servings;
		}
		else if (menu == "카푸치노") {
			cout << 2500 * servings << "원입니다. 맛있게 드세요" << endl;
			total += 2500 * servings;
		}
		else
			cout << "잘못 입력하셨습니다." << endl;

	} while (total <= 20000);
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}
