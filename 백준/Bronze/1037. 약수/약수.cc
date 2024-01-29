/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    vector<int> weak;
    
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        weak.push_back(a);
    }
    
    sort(weak.begin(),weak.end());
    
    int last=weak.size()-1;
    
    cout<<weak[0]*weak[last]<<endl;

    return 0;
}
