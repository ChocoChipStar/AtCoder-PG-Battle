#include<iostream>

using namespace std;

int main(void)
{
	string abcd;

	cin >> abcd;

	string plusAndMinus[]{ "+", "-"};
	
	int number[4]{};
	const int A = 0;
	const int B = 1;
	const int C = 2;
	const int D = 3;
	
	for (int i = 0; i < 4; i++)
	{
		number[i] = abcd[i] - '0';
	}

	int total = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				if(i == )
				total = number[A]plusAndMinus[i],number[B],plusAndMinus[j],number[C],plusAndMinus[k],number[D];
				if (total == 7)
				{
					//cout << number[A], plusAndMinus[i], number[B], plusAndMinus[j], number[C], plusAndMinus[k], number[D] << endl;
					break;
				}
			}
		}
	}
	
	return 0;
}