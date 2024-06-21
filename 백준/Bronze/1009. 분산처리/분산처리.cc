#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b, result = 1;
        cin >> a >> b;

        for (int j = 0; j < b; j++)
        {
            result = (result * a) % 10;
        }

        if (result == 0)
        {
            cout << 10 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}