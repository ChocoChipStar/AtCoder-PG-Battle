#include<iostream>

using namespace std;

int main(void)
{
	// �v���O�����̃\�[�X�R�[�h�� N �s���x�ɂȂ�
	int N = 530;

	//  1 ���Ԃ����� X �s�̃R�[�h�������\�͂������Ă���
	int X = 76;

	// �J��������ƁA�P���Ԃ�����ɏ������Ƃ̂ł���\�[�X�R�[�h�̍s���� F �s��������
	int F = 6;

	// �������Ɓi3���ԁj�A�P���Ԃ�����ɏ������Ƃ̂ł���\�[�X�R�[�h�̍s���� S �s����������
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
		//	// ���������Ɩ������[�v�ɂȂ肻��
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