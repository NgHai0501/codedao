#include<bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int dem=0;
            while(n%i==0)
            {
                dem++;
                n/=i;
            }
            if(dem>=3) return true;
        }
    }
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
}