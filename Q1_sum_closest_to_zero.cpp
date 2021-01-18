#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<math.h>
using namespace std;

bool compare(int a, int b)
{
    return abs(a) < abs(b);
}

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

    sort(v.begin(), v.end(), compare);
    /*
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    */
    int mini = INT_MAX, x, y; 
    for(int i = 1; i < v.size(); i++)
    {
        if(abs(v[i - 1] + v[i]) <= mini)
        {
            mini = abs(v[i - 1] + v[i]);
            x = i - 1;
            y = i;
        }
    }
    cout <<mini <<"\n";
    cout << v[x] << " " << v[y] << "\n";
    return 0;
}
