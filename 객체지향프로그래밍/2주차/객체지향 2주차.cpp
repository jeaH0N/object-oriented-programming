#include <iostream>
using namespace std;

/*
//size 확인 하는 변수식
int main()
{
	short a = 5;
	cout << sizeof(a);
	return 0;
}*/

/*
//배열의 합
int main()
{
	int a[10];//a에 정수 10개짜리 빈 메모리 공간 생성
	double d[] = { 0.1,0.2,0.5,3.9 };//배열 d에 0.1,0.2,0.5,3.9으로 초기화
	double sum2 = 0;//배열 d를 더할 sum2 변수 선언과 0으로 초기화

	for (int i = 0; i < 10; i++)//i = 0이라는 초기문 i < 10까지라는 조건문과 i++증감식 선언
	{
		a[i] = i * 2;//a[i]의 각 배열마다 i * 2의 값을 채움
		cout << a[i] << " ";//각 배열이 잘 나왔는지 구분하기위한 구분식
	}
	cout << endl;//줄바꿈 선언
	for (int i = 0; i < 4; i++)//i = 0이라는 초기문 i < 4까지라는 조건문과 i++증감식 선언
	{
		sum2 += d[i];//d[i]개들의 값들 더해서 sum2 변수에 더하여 저장
	}
	cout << "d의 배열의 합은 " << sum2;//sum2로 d[]의 값 합 선언
	return 0;
}*/

/*
//a,b합 나오는 함수
int Adder(int a, int b); 함수 Adder 선언

int Adder(int a, int b)//Adder 함수 작성 int로 결과값을 돌아오게함.
{
	int sum;//a와 b를 더할 지역 변수 sum 선언
	sum = a + b;//sum에 a(매개변수) + b(매개변수) 값을 채움
	return sum;
}
int main()
{
	int a = 24567;//a = 24567 변수 초기화
	int b = 98374;//b = 98374 변수 초기화
	cout << a << "과 " << b << "의 합은 " << Adder(a, b) << "입니다." << endl;//함수 Adder 호출
	int c;//변수 c 선언
	int d;//변수 d 선언
	cout << "두개의 정수를 입력하세요>>";	cin >> c >> d;//c와 d cin 으로 변수 삽입
	cout << c << "과 " << d << "의 합은 " << Adder(c, d) << "입니다.";//함수 Adder 호출

	return 0;
}*/

/*
//함수호출 a,b중 뭐가 큰지, 3의 배수가 맞는지 확인 함수
int bigger(int a, int b);//두 개의 정수를 받아 큰 값을 리턴하는 함수 원형 선언
int divded(int a, int b);//매개 변수가 3으로 나누어지면 true, 아니면 false를 리턴하는 함수 원형 선언

int bigger(int a, int b)//두 개의 정수를 받아 큰 값을 리턴하는 함수
{
	if (a > b)
	{
		return a;//a가 b보다 크면 a값 return
	}
	else
	{
		return b;//b가 a보다 크면 b값 return
	}
}

int divded(int a, int b)//매개 변수가 3으로 나누어지면 true, 아니면 false를 리턴하는 함수
{
	if (b % 3 != 0)
	{
		return false;//매개변수 b가 3으로 나누었을때 나누어지지 않으면 false 선언
	}
	else
	{
		return true;//그렇지 않으면 true 선언
	}
}

int main()
{
	int a;//변수 a선언
	int b;//변수 b선언
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;//변수 a와 b삽입
	cout << a << "중 " << b << "중 큰 값은 " << bigger(a, b) << "입니다." << endl;//bigger함수 호출
	if (divded(a, b))//divded()함수 호출
	{
		cout << b << "는 3의 배수가" << "맞습니다." << endl;
	}
	else
	{
		cout << b << "는 3의 배수가 " << "아닙니다." << endl;
	}
}
*/

/*
//배열을 매개 변수로 가진 함수의 호출
int addArray(int a[], int size);//배열과 개수를 전달받아 합을 리턴하는 함수 원형 선언
void makeDuble(int a[], int size);//배열의 값을 두배로 증가시키는 함수 원형 선언
void printArray(int a[], int size);//배열을 출력하는 함수 원형 선언

int main()
{
	int a[] = { 1,2,3,4,5 };//배열 a의 원소가 5개인 1~5까지의 값을 선언
	cout << "배열 n의 합은 " << addArray(a, 5) << "입니다." << endl;//addArray(배열 a(매개변수), 개수(매개변수)) 호출
	makeDuble(a, 5);//makeDuble(배열 a(매개변수), 개수(매개변수)) 호출
	printArray(a, 5);//printArray(배열 a(매개변수), 개수(매개변수)) 호출
	return 0;
}

int addArray(int a[], int size)//배열과 개수를 전달받아 합을 리턴하는 함수
{
	int sum = 0;//변수 sum 0으로 초기화
	for (int i = 0; i < size; i++)//i = 0이라는 초기문 i < 매개변수로 입력받은 size 만큼까지라는 조건문과 i++증감식 선언
	{
		sum += a[i];//각각의 배열의 원소를 sum에 더해서 저장
	}
	return sum;//리턴 sum을 리턴함
}

void makeDuble(int a[], int size)//배열의 값을 두배로 증가시키는 함수
{
	for (int i = 0; i < size; i++)
	{
		a[i] *= 2;//원소의 값을 2배씩 증가
	}
}

void printArray(int a[], int size)//배열을 출력하는 함수
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";//각각의 배열의 원소들 출력
	}
	cout << endl;
}
*/

/*
//포인터 선언및 활용
int main()
{
	int n = 10,m;//변수 n에 10선언, m선언
	char c;
	double d;
	int* p = &n;//p는 n의 주소값을 가짐
	char* q = &c;//q는 c의 주소값을 가짐
	double* r = &d;//r은 d의 주소값을 가짐
	*p = 25;//p가 가르키는 n의 값에 25가 저장됨
	*q = 'A';//q가 가르키는 c의 값에 A가 저장됨
	*r = 3.14;//r이 가르키는 d의 값에 3.14가 저장됨
	m = *p + 10;//p가 가르키는 n의 값 25 와 10이 더해짐

	cout << n << ' ' << *p << endl;//n과 *p의 값은 같음
	cout << c << ' ' << *q << endl;//c와 *q의 값은 같음
	cout << d << ' ' << *r << endl;//d와 *r의 값은 같음
	cout << m;//*p(25)= &n 와 10을 더한 값이 출력
	return 0;
}*/
/*
//포인터로 배열 접근
int main()
{
	int n[10];
	int* p;//*p = n으로 선언할수도 있음.
	int i;
	for (i = 0;i < 10;i++)
	{
		*(n + i) = i * 3;//배열의 이름 n을 주소처럼 입력. 배열 n을 3의 배수로 채움
	}
	p = n;//포인터 p에 배열 n의 시작 주소를 설정
	for (i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";//포인터 p를 이용하여 배열 n의 원소를 접근
	}
	cout << endl;
	for (i = 0; i < 10; i++)
	{
		*(p + i) += 2;//포인터 p를 이용하여 배열의 원소값을 2 증가한다.
		//*p += 2;
		//p++; //p는 다음 원소의 주소로 증가.이 방법도 있음
	}
	for (i = 0; i < 10;i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
	return 0;
}*/