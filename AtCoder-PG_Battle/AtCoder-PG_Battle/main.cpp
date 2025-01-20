#include<iostream>
#include<vector>
#include<numeric>

using namespace std;


unsigned long long lcm_arr();

/// <summary>
/// Å¬Œö”{”‚ğ‹‚ß‚éŠÖ”
/// </summary>
unsigned long long lcm(unsigned long long a, unsigned long long b);


/// <summary>
/// Å‘åŒö–ñ”‚ğ‹‚ß‚éŠÖ”
/// </summary>
unsigned long long gcd(unsigned long long a, unsigned long long b);

vector<unsigned long long> numbers;

int main(void)
{
	int n = 0;
	cin >> n;

	numbers.assign(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	
	cout << lcm_arr() << endl;
	return 0;
}

unsigned long long lcm_arr() {
	int n = numbers.size();
	while (n > 2)
	{
		numbers[n - 2] = lcm(numbers[n - 2], numbers[n - 1]);
		numbers.pop_back();
	}

	return lcm(numbers[0], numbers[1]);
}

unsigned long long lcm(unsigned long long a, unsigned long long b) 
{
	return (a / gcd(a, b)) * b; // ”š‚ª‘å‚«‚­‚È‚è‚·‚¬‚é‚Ì‚Åæ‚ÉŠ„‚èZ‚ğ‚µ‚Ä¬‚³‚¢”š‚ğŠ|‚¯‚é
}

unsigned long long gcd(unsigned long long a, unsigned long long b) 
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