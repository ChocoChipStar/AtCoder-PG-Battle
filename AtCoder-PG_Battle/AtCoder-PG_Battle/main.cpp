#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;

map<int, vector<int>> ladderMap;
set<int> arriveFloor;

void MovementFloor(int floor);

int main(void)
{
	int n = 0;

	cin >> n;



	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		ladderMap[a].emplace_back(b);
		ladderMap[b].emplace_back(a);
	}

	MovementFloor(1);
	
	cout << *arriveFloor.rbegin() << endl;

	return 0;
}

void MovementFloor(int floor)
{
	// 来たことあるフロアか確認する
	if (arriveFloor.find(floor) != arriveFloor.end())
	{
		return;
	}

	// 到達したフロアを登録する
	arriveFloor.insert(floor);

	// 全てのはしごを確認する
	for (int i = 0; i < ladderMap[floor].size(); ++i)
	{
		auto&& nextFloor = ladderMap[floor][i];
		if (arriveFloor.find(nextFloor) != arriveFloor.end())
		{
			MovementFloor(ladderMap[floor][i]);
		}
	}
}

//void test(int maximum);
//
//int a[200000];
//int b[200000];
//
//int n = 0;
//
//const int A = 0;
//const int B = 1;
//
//int oneValueSavedArray[2][200000];
//
//int toToValueArray[2][200000];
//
//int counterA = 0;
//int counterB = 0;
//
//int counterTo = 0;
//
//int main(void)
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] >> b[i];
//	}
//	
//	test(1);
//}
//
//void test(int maximum)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == maximum)
//		{
//			oneValueSavedArray[A][counterA] = i; // 0 5
//			counterA++;
//		}
//
//		if (b[i] == maximum)
//		{
//			oneValueSavedArray[B][counterB] = i; // 5
//			counterB++;
//		}
//	}
//
//	int oneToValueArray[200000];
//	for (int i = 0; i < counterA; i++)
//	{
//		oneToValueArray[counterTo] = b[oneValueSavedArray[A][i]]; // 4 2
//		counterTo++;
//	}
//
//	for (int i = 0; i < counterB; i++)
//	{
//		oneToValueArray[counterTo] = a[oneValueSavedArray[B][i]]; // 9
//		counterTo++;
//	}
//
//	//int max = *std::max_element(begin(oneToValueArray), end(oneToValueArray));
//
//	for (int i = 0; i < counterTo; i++)
//	{
//		test(oneToValueArray[i]);
//	}
//
//	if (max > maximum)
//	{
//		test(max);
//	}
//	else if(max == 0)
//	{
//		cout << 1 << endl;
//	}
//	else
//	{
//		cout << max << endl;
//	}
//}


