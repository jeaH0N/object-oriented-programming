#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int num;//�ܼ�
	int total = 0;//�Ǹ� �� �ݾ�
	int order;//���� �ֹ��� �ݾ�

	char menu[100];

	cout << "espresso 2000��, americano 2300��, cappuccino 2500���Դϴ�." << endl;
	
	 while (1);
	{
		cout << "�ֹ�>>";
		cin >> menu >> num;
		if (strcmp(menu, "espresso") == 0)
		{
			order = 2000 * num;
			cout << 2000 * num << " �� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(menu, "americano") == 0)
		{
			order = 2300 * num;
			cout << 2300 * num << " �� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(menu, "cappuccino") == 0)
		{
			order = 2500 * num;
			cout << 2500 * num << " �� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else
		{
			order = 0;
		}
		if (order > 0) {
			cout << order << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else {
			cout << "���� Ŀ���Դϴ�. �ٽ� �Է����ּ���." << endl;
		}
		total += order;
		if (total > 20000) 
		{
			cout << "����" << total << "�Ǹ�, ���� ����" << endl ;
			
		}
	}
	return 0;
}
