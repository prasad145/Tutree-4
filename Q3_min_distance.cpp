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

    int x, y;
    cin >> x >> y;
    int prev = -1, mini = INT_MAX;
    for(int i = 0; i < v.size(); i++)
    {
        if(prev != -1 && v[i] != v[prev])
        {
            if(i - prev < mini)
            {
                mini = (i - prev);
            }
        }

        prev = i;
    }
    cout << mini << "\n";
    return 0;
}
