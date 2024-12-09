#include<iostream>

using namespace std;

void calculate();

int main(void)
{
	int n, y = 0;

	const int BILL_MAX = 2000;
	const int MONEY_MIN = 1000;
	const int MONEY_MAX = 20000000;

	const int SEN_YEN    = 1000;
	const int GOSEN_YEN  = 5000;
	const int ITIMAN_YEN = 10000;

	int senYenSatu[]{ 0 };
	int gosenYenSatu[]{ 0 };
	int itimanYenSatu[]{ 0 };

	cin >> n >> y;

	if (n > 2000)
	{
		return 0;
	}

	if (y < MONEY_MIN || y > MONEY_MAX)
	{
		return 0;
	}

	for (int itimanYenCount = 0; itimanYenCount <= n; ++itimanYenCount)
	{
		// ŒÜç‰~ŽD‚ª9–‡ˆÈã‚É‚È‚é‚Æˆê–œ‰~ŽD
		const int GOSEN_YEN_COUNT_MAX = min(n - itimanYenCount, 8);
		for (int gosenYenCount = 0; gosenYenCount <= GOSEN_YEN_COUNT_MAX; ++gosenYenCount)
		{
			int senYenCount = n - itimanYenCount - gosenYenCount;
			if (itimanYenCount * ITIMAN_YEN + gosenYenCount * GOSEN_YEN + senYenCount * SEN_YEN != y)
			{
				continue;
			}

			cout << itimanYenCount << ' ' << gosenYenCount << ' ' << senYenCount << endl;
			return 0;
		}
	}

	return 0;
}

void calculate()
{

}