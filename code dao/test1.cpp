#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        multiset<int> ms;
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            ms.insert(x);
        }
        int dem=0;
        for(auto it: ms)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
