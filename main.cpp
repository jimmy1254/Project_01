#include <iostream>
#include <windows.h>
using namespace std;

//void�� ��°��� ���� �Լ� ����� �ְ� �Լ� �̸��ڿ� ;�� ������ �Լ� ��� ����

// if�� �����ʰ�

//�Լ� �̸�: PrintTo100	
//���� : 0~100���� ��� 
//�Է°� : ����
//��°� : ����
void PrintTo100()
{
	int number[1000] = { 0 };//[]���̿��ִ� ���ڴ� ������ �ǹ��Ѵ�.

	for (int i = 0; i < 100; ++i)//++�� �ڿ� ���൵ ������ �տ����ִ°��� ����.
	{
		number[i] = i ;


		cout << number[i] << endl;
	}
}

//�Լ� �̸�: PrintToEven	
//���� : 0~100���� ¦�� ��� 
//�Է°� : ����
//��°� : ����
void PrintToEven()
{
	int number[200] = { 0 };

	for (int i = 0; i < 50;++i)
	{
		number[i] = i * 2;

		cout << number[i] << endl;

	}

}

//�Լ� �̸�: PrintToOdd	
//���� : 0~100���� Ȧ�� ��� 
//�Է°� : ����
//��°� : ����
void PrintToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		number[i] = i * 2 + 1;


		cout << number[i] << endl;
	}
}

//�Լ� �̸�: PrintTo3Dra
//���� : 0~100���� 3�� ��� ��� 
//�Է°� : ����
//��°� : ����
void PrintTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 34; ++i)
	{
		number[i] = i * 3;

		cout << number[i] << endl;
	}
}


//�Լ� �̸�: PrintTo3multi	
//���� : 0~100���� 3�¼� ��� 
//�Է°� : ����
//��°� : ����
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

//�Լ� �̸�: PrintToGogodan	
//���� : n�Ǳ�����*9���� ��� 
//�Է°� : int n
//��°� : ����
void PrintToGogodan(int n)
{
	cin >> n;

	for (int i = 1; i < 10; ++i)
	{
		int result = i * n;

		cout << n << " * " << i << " = " << result << endl;
	}
}
//������ 2�� ����ض�(2*i=number[i])
	/*for (int j = 1; j < 10; ++j)
	{
		for (int i = 2; i < 10; ++i)
		{
			int result = i * j;
			cout << j << " * " << i << " = " << result << endl;
		}

	}*/
//�Է°��� �Լ� ��ȣ�ȿ� �־��ָ�ȴ�.

//�Լ� �̸�: PrintFactorial
//���� : n!�� ���Ѱ������ ��ȯ�Ѵ�.
//�Է°� : int n
//��°� : int
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
	//x�� Location x��� �����ϰ� +�������� ���ٰ� -�������� ��� �����̰� ������
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
//ctrl+k+c�� �ϸ� ���� ��ü �ּ�ó��