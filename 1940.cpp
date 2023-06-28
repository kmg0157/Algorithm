#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	int sum = 0;
	int cnt = 0;

	cin >> n ;
	cin >> m;

	vector<int> v;

	for (int i = 0;i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum = v[i] + v[j];
			if (sum == m)
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;

}