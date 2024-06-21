#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> num;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());

    for (int i = 0; i < num.size(); i++)
        cout << num[i] << '\n';

    return 0;
}
