#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	float result = 0;
	vector<float> original;
	float max = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		original.push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		if (max < original[i])
		{
			max = original[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		result += original[i] / max * 100;
	}
	cout << result / n << endl;
}