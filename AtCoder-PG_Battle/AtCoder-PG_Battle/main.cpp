#include<iostream>	
#include<vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;


	// 人数を求める

	// const int people = pow(2,n); // 2のn乗を計算 std::pow
	const int people = 1 << n; // 二進数を用いた2のn乗計算

	// トーナメント表を作成
	vector<int> rank(people);

	//トーナメント参加者を8人と仮定して作成

	// 全員がベスト8の状態でスタートするため順位に8を代入

	int best = 8;
	int add = 1;

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j < people; j += add)
		{
			rank[i] = best;
		}

		best /= 2;
		add *= 2;

		cout << rank[i] << endl;
	}




	return 0;
}