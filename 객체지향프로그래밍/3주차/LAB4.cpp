#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	string menu;
	int servings, total = 0;
	do {
		cout << "�ֹ�>>";
		getline(cin, menu, ' '); // 1
		cin >> servings;
		cin.ignore(); // 2
		if (menu == "����������") {
			cout << 2000 * servings << "���Դϴ�. ���ְ� �弼��" << endl;
			total += 2000 * servings;
		}
		else if (menu == "�Ƹ޸�ī��") {
			cout << 2300 * servings << "���Դϴ�. ���ְ� �弼��" << endl;
			total += 2300 * servings;
		}
		else if (menu == "īǪġ��") {
			cout << 2500 * servings << "���Դϴ�. ���ְ� �弼��" << endl;
			total += 2500 * servings;
		}
		else
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;

	} while (total <= 20000);
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
}
