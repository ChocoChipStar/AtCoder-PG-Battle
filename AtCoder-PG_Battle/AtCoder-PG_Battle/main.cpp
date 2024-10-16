#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0) 
	{
		return b;
	}
	else 
	{
		return gcd(b, a % b);
	}
}

int main(void)
{
	// ‘•”‰®‚Ì”
	int n = 0;

	// ‰½•”‰®’u‚«‚É‘|œ‚·‚é‚©
	int m = 0;

	cin >> n;
	cin >> m;

	int answer = 0;
	
	answer = gcd(n, m);

	if (answer == 1)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
	// 71400
	// 38896
}