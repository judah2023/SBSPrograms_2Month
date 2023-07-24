#pragma once
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, temp, cnt;
	double avg;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> m;
		vector<int> scoreList(m);
		avg = cnt = 0;
		for (size_t j = 0; j < m; j++)
		{
			cin >> temp;
			scoreList[j] = temp;
			avg += temp;
		}
		avg /= m;

		for (auto it : scoreList)
			if (it > avg)
				cnt++;

		cout.precision(5);
		cout << cnt * 100 / (double)m << "%\n";
	}
	return 0;
}
/*
����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�. ����� ��°��� ����/��� ������ 10-3�����̸� �����̴�.

���� �Է� 1
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
���� ��� 1
40.000%
57.143%
33.333%
66.667%
55.556%
*/