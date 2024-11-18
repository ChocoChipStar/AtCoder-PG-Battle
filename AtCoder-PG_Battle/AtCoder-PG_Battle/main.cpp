#include<iostream>

using namespace std;

int main(void)
{
	int n = 0;
	int h[100000];

	int totalCost = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (h[i + 1] < 0 && h[i + 2] < 0)
		{
			break;
		}

		int selfBlockCost = h[i];
		int oneBlockCost = abs(h[i] - h[i + 1]);
		int twoBlockCost = abs(h[i] - h[i + 2]);

		if (oneBlockCost > twoBlockCost)
		{
			i += 1;
			if (twoBlockCost == 0)
			{
				continue;
			}

			totalCost = totalCost + twoBlockCost;
			continue;
		}

		if (oneBlockCost == 0)
		{
			continue;
		}

		totalCost = totalCost + oneBlockCost;
	}

	cout << totalCost << endl;

	return 0;
}