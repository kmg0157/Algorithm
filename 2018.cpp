#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	int cnt=1;
	int start = 1;
	int fin = 1;
	int sum = 1;

	cin >> n;

	while (fin != n)
	{
		if (sum == n)
		{
			cnt++;
			fin += 1;
			sum += fin;
		}
		else if(sum > n)
		{
			sum -= start;
			start++;
		}
		else {
			fin++;
			sum += fin;
		}
	}
	cout << cnt << endl;
}