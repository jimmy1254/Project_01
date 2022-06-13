#include <iostream>
#include <windows.h>
using namespace std;

//void로 출력값이 없는 함수 만들어 주고 함수 이름뒤에 ;를 넣으면 함수 출력 가능

// if문 쓰지않고

//함수 이름: PrintTo100	
//동작 : 0~100까지 출력 
//입력값 : 없음
//출력값 : 없음
void PrintTo100()
{
	int number[1000] = { 0 };//[]사이에있는 숫자는 공간을 의미한다.

	for (int i = 0; i < 100; ++i)//++를 뒤에 써줘도 되지만 앞에써주는것이 좋다.
	{
		number[i] = i ;


		cout << number[i] << endl;
	}
}

//함수 이름: PrintToEven	
//동작 : 0~100까지 짝수 출력 
//입력값 : 없음
//출력값 : 없음
void PrintToEven()
{
	int number[200] = { 0 };

	for (int i = 0; i < 50;++i)
	{
		number[i] = i * 2;

		cout << number[i] << endl;

	}

}

//함수 이름: PrintToOdd	
//동작 : 0~100까지 홀수 출력 
//입력값 : 없음
//출력값 : 없음
void PrintToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		number[i] = i * 2 + 1;


		cout << number[i] << endl;
	}
}

//함수 이름: PrintTo3Dra
//동작 : 0~100까지 3의 배수 출력 
//입력값 : 없음
//출력값 : 없음
void PrintTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 34; ++i)
	{
		number[i] = i * 3;

		cout << number[i] << endl;
	}
}


//함수 이름: PrintTo3multi	
//동작 : 0~100까지 3승수 출력 
//입력값 : 없음
//출력값 : 없음
void PrintTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 4; ++i)
	{
		number[i] = 3;

		for (int j = 0; j < i; ++j)
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}
}

//함수 이름: PrintToGogodan	
//동작 : n의구구단*9까지 출력 
//입력값 : int n
//출력값 : 없음
void PrintToGogodan(int n)
{
	cin >> n;

	for (int i = 1; i < 10; ++i)
	{
		int result = i * n;

		cout << n << " * " << i << " = " << result << endl;
	}
}
//구구단 2단 출력해라(2*i=number[i])
	/*for (int j = 1; j < 10; ++j)
	{
		for (int i = 2; i < 10; ++i)
		{
			int result = i * j;
			cout << j << " * " << i << " = " << result << endl;
		}

	}*/
//입력값은 함수 괄호안에 넣어주면된다.

//함수 이름: PrintFactorial
//동작 : n!을 구한결과값을 반환한다.
//입력값 : int n
//출력값 : int
int PrintFactorial(int n)
{
	cin >> n;

	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;

	}
	return result;
}


int main()
{
	//x를 Location x라고 가정하고 +방향으로 갔다가 -방향으로 계속 움직이게 해주자
	int x = { 0 };
	bool IsMoveRight = true;
	
	while (1)
	{
		system("cls");
		cout << x << endl;
		
		if (IsMoveRight)
		{
			x++;
			if (x >= 20)
			{
				IsMoveRight = false;
			}

		}
		else
		{
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}
		
		
		
		Sleep(100);
		
	}

	
	
}
//ctrl+k+c를 하면 고른거 전체 주석처리