#include<iostream>	
#include<vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;


	// �l�������߂�

	// const int people = pow(2,n); // 2��n����v�Z std::pow
	const int people = 1 << n; // ��i����p����2��n��v�Z

	// �g�[�i�����g�\���쐬
	vector<int> rank(people);

	//�g�[�i�����g�Q���҂�8�l�Ɖ��肵�č쐬

	// �S�����x�X�g8�̏�ԂŃX�^�[�g���邽�ߏ��ʂ�8����

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