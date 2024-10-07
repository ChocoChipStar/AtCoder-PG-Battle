#include<iostream>

using namespace std;

int main(void)
{
	// プログラムのソースコードは N 行程度になる
	int N = 530;

	//  1 時間あたり X 行のコードを書く能力を持っている
	int X = 76;

	// 開発をすると、１時間あたりに書くことのできるソースコードの行数は F 行だけ減る
	int F = 6;

	// 睡眠取ると（3時間）、１時間あたりに書くことのできるソースコードの行数は S 行だけ増える
	int S = 2;

	int current_our = 0;
	int current_x = X;
	int percantage_x = X;

	int dev_count = 0;

	int remaining_digit = N;

	bool sleepStopper = false;

	while (true)
	{
		remaining_digit = remaining_digit - current_x;
		current_our++;
		
		if (remaining_digit <= 0)
			break;

		if (current_x - F >= percantage_x * 0.5f)
		{
			current_x = current_x - F;
			continue;
		}

		/*if (sleepStopper)
		{
			current_x = current_x - F;
			continue;
		}*/

		current_our += 3;
		current_x = current_x - F + S;
		percantage_x = current_x;

		//int total = 0;
		//int testX = current_x;
		//while (true)
		//{
		//	// 数が多いと無限ループになりそう
		//	total += testX + (testX - F);
		//	testX = testX - F;

		//	if (testX <= 0)
		//		break;
		//}

		//if (remaining_digit - total <= 0)
		//{
		//	sleepStopper = true;
		//	continue;
		//}
	}

	cout << current_our << endl;

	

	//cin >> N >> X >> F >> S;
	//cout << endl;

	

	return 0;
}