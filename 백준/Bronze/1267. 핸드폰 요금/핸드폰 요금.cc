#include<iostream>
#include<vector>

using namespace std;

int minsik(vector<int> v)
{
	int sum = 0;

	for (auto a : v)
	{
		if (a / 60 == 0) sum += 15;
		else sum += ((a / 60)+1) * 15;
	}

	return sum;
}

int youngsik(vector<int> v)
{
	int sum = 0;

	for (auto a : v)
	{
		if (a / 30 == 0) sum += 10;
		else sum += ((a / 30)+1) * 10;
	}

	return sum;
}

int main()
{
	int N;
	vector<int> time;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		time.push_back(a);
	}

	int a = youngsik(time);
	int b = minsik(time);

	if (a > b) cout << "M " << b << endl;
	else if (a < b) cout << "Y " << a << endl;
	else cout << "Y M " << a << endl;
}