#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	string nums;

	cin >> n;
	cin >> nums;

	for (int i = 0; i < nums.length(); i++)
	{
		sum += nums[i] - '0';
	}

	cout << sum << endl;
}