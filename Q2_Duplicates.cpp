#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(v[abs(v[i])] > 0)
        {
            v[abs(v[i])] = - v[abs(v[i])];
        }
        else
        {
            cout << abs(v[i]) << " ";
        }
    }
    return 0;
}
