#include <iostream>
using namespace std;

/*
//size Ȯ�� �ϴ� ������
int main()
{
	short a = 5;
	cout << sizeof(a);
	return 0;
}*/

/*
//�迭�� ��
int main()
{
	int a[10];//a�� ���� 10��¥�� �� �޸� ���� ����
	double d[] = { 0.1,0.2,0.5,3.9 };//�迭 d�� 0.1,0.2,0.5,3.9���� �ʱ�ȭ
	double sum2 = 0;//�迭 d�� ���� sum2 ���� ����� 0���� �ʱ�ȭ

	for (int i = 0; i < 10; i++)//i = 0�̶�� �ʱ⹮ i < 10������� ���ǹ��� i++������ ����
	{
		a[i] = i * 2;//a[i]�� �� �迭���� i * 2�� ���� ä��
		cout << a[i] << " ";//�� �迭�� �� ���Դ��� �����ϱ����� ���н�
	}
	cout << endl;//�ٹٲ� ����
	for (int i = 0; i < 4; i++)//i = 0�̶�� �ʱ⹮ i < 4������� ���ǹ��� i++������ ����
	{
		sum2 += d[i];//d[i]������ ���� ���ؼ� sum2 ������ ���Ͽ� ����
	}
	cout << "d�� �迭�� ���� " << sum2;//sum2�� d[]�� �� �� ����
	return 0;
}*/

/*
//a,b�� ������ �Լ�
int Adder(int a, int b); �Լ� Adder ����

int Adder(int a, int b)//Adder �Լ� �ۼ� int�� ������� ���ƿ�����.
{
	int sum;//a�� b�� ���� ���� ���� sum ����
	sum = a + b;//sum�� a(�Ű�����) + b(�Ű�����) ���� ä��
	return sum;
}
int main()
{
	int a = 24567;//a = 24567 ���� �ʱ�ȭ
	int b = 98374;//b = 98374 ���� �ʱ�ȭ
	cout << a << "�� " << b << "�� ���� " << Adder(a, b) << "�Դϴ�." << endl;//�Լ� Adder ȣ��
	int c;//���� c ����
	int d;//���� d ����
	cout << "�ΰ��� ������ �Է��ϼ���>>";	cin >> c >> d;//c�� d cin ���� ���� ����
	cout << c << "�� " << d << "�� ���� " << Adder(c, d) << "�Դϴ�.";//�Լ� Adder ȣ��

	return 0;
}*/

/*
//�Լ�ȣ�� a,b�� ���� ū��, 3�� ����� �´��� Ȯ�� �Լ�
int bigger(int a, int b);//�� ���� ������ �޾� ū ���� �����ϴ� �Լ� ���� ����
int divded(int a, int b);//�Ű� ������ 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ� ���� ����

int bigger(int a, int b)//�� ���� ������ �޾� ū ���� �����ϴ� �Լ�
{
	if (a > b)
	{
		return a;//a�� b���� ũ�� a�� return
	}
	else
	{
		return b;//b�� a���� ũ�� b�� return
	}
}

int divded(int a, int b)//�Ű� ������ 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ�
{
	if (b % 3 != 0)
	{
		return false;//�Ű����� b�� 3���� ���������� ���������� ������ false ����
	}
	else
	{
		return true;//�׷��� ������ true ����
	}
}

int main()
{
	int a;//���� a����
	int b;//���� b����
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;//���� a�� b����
	cout << a << "�� " << b << "�� ū ���� " << bigger(a, b) << "�Դϴ�." << endl;//bigger�Լ� ȣ��
	if (divded(a, b))//divded()�Լ� ȣ��
	{
		cout << b << "�� 3�� �����" << "�½��ϴ�." << endl;
	}
	else
	{
		cout << b << "�� 3�� ����� " << "�ƴմϴ�." << endl;
	}
}
*/

/*
//�迭�� �Ű� ������ ���� �Լ��� ȣ��
int addArray(int a[], int size);//�迭�� ������ ���޹޾� ���� �����ϴ� �Լ� ���� ����
void makeDuble(int a[], int size);//�迭�� ���� �ι�� ������Ű�� �Լ� ���� ����
void printArray(int a[], int size);//�迭�� ����ϴ� �Լ� ���� ����

int main()
{
	int a[] = { 1,2,3,4,5 };//�迭 a�� ���Ұ� 5���� 1~5������ ���� ����
	cout << "�迭 n�� ���� " << addArray(a, 5) << "�Դϴ�." << endl;//addArray(�迭 a(�Ű�����), ����(�Ű�����)) ȣ��
	makeDuble(a, 5);//makeDuble(�迭 a(�Ű�����), ����(�Ű�����)) ȣ��
	printArray(a, 5);//printArray(�迭 a(�Ű�����), ����(�Ű�����)) ȣ��
	return 0;
}

int addArray(int a[], int size)//�迭�� ������ ���޹޾� ���� �����ϴ� �Լ�
{
	int sum = 0;//���� sum 0���� �ʱ�ȭ
	for (int i = 0; i < size; i++)//i = 0�̶�� �ʱ⹮ i < �Ű������� �Է¹��� size ��ŭ������� ���ǹ��� i++������ ����
	{
		sum += a[i];//������ �迭�� ���Ҹ� sum�� ���ؼ� ����
	}
	return sum;//���� sum�� ������
}

void makeDuble(int a[], int size)//�迭�� ���� �ι�� ������Ű�� �Լ�
{
	for (int i = 0; i < size; i++)
	{
		a[i] *= 2;//������ ���� 2�辿 ����
	}
}

void printArray(int a[], int size)//�迭�� ����ϴ� �Լ�
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";//������ �迭�� ���ҵ� ���
	}
	cout << endl;
}
*/

/*
//������ ����� Ȱ��
int main()
{
	int n = 10,m;//���� n�� 10����, m����
	char c;
	double d;
	int* p = &n;//p�� n�� �ּҰ��� ����
	char* q = &c;//q�� c�� �ּҰ��� ����
	double* r = &d;//r�� d�� �ּҰ��� ����
	*p = 25;//p�� ����Ű�� n�� ���� 25�� �����
	*q = 'A';//q�� ����Ű�� c�� ���� A�� �����
	*r = 3.14;//r�� ����Ű�� d�� ���� 3.14�� �����
	m = *p + 10;//p�� ����Ű�� n�� �� 25 �� 10�� ������

	cout << n << ' ' << *p << endl;//n�� *p�� ���� ����
	cout << c << ' ' << *q << endl;//c�� *q�� ���� ����
	cout << d << ' ' << *r << endl;//d�� *r�� ���� ����
	cout << m;//*p(25)= &n �� 10�� ���� ���� ���
	return 0;
}*/
/*
//�����ͷ� �迭 ����
int main()
{
	int n[10];
	int* p;//*p = n���� �����Ҽ��� ����.
	int i;
	for (i = 0;i < 10;i++)
	{
		*(n + i) = i * 3;//�迭�� �̸� n�� �ּ�ó�� �Է�. �迭 n�� 3�� ����� ä��
	}
	p = n;//������ p�� �迭 n�� ���� �ּҸ� ����
	for (i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";//������ p�� �̿��Ͽ� �迭 n�� ���Ҹ� ����
	}
	cout << endl;
	for (i = 0; i < 10; i++)
	{
		*(p + i) += 2;//������ p�� �̿��Ͽ� �迭�� ���Ұ��� 2 �����Ѵ�.
		//*p += 2;
		//p++; //p�� ���� ������ �ּҷ� ����.�� ����� ����
	}
	for (i = 0; i < 10;i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
	return 0;
}*/