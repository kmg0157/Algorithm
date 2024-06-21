#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int station = 4;
	int tmp = 0;
	vector<int> people;

	for (int i = 0; i < station; i++)
	{
		int push, pop;
		cin >> pop >> push;
		tmp += push - pop;
		people.push_back(tmp);
	}
	auto max_element_it = max_element(people.begin(), people.end());

	cout << *max_element_it << endl;
}