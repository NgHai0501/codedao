#include<bits/stdc++.h>
using namespace std;

int executive(int n)
{
    if(n==2) return 2;
    if(n==3) return 3;
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            n/=i;
        }
        if(n==1) return i;
    }
    return n;
}

int main()
{
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long tong = 0; 
        for(int i=2;i<=n;i++)
        {
            tong+=executive(i);
        }
        cout << tong << endl;
    }
}