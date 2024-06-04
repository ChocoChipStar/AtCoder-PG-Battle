#include<iostream>
#define VAR_NAME(var) #var
using namespace std;

int main(void)
{
	constexpr int FIZZ = 3;
	constexpr int BUZZ = 5;
	
	constexpr int LOOP_START_VAL = 1;
	constexpr int LOOP_COUNT = 100;

	string fizz[]{ "",VAR_NAME(FIZZ) };
	string buzz[]{ "",VAR_NAME(BUZZ) };

	for (int i = LOOP_START_VAL; i < LOOP_COUNT; ++i)
	{
		cout << fizz[i % 3 == 0];
		cout << buzz[i % 5 == 0];

		cout << i << endl;
	}

	return 0;
}