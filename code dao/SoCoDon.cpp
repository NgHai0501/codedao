#include<bits/stdc++.h>
using namespace std;
#define ll long long

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << g.front() << " ";
        g.pop();
    }
    cout << endl;
}

void BFS(int k, int n,vector<vector<int>> a)
{
    vector<int> res;
    int chuaxet[n+1];
    for(int i=1;i<=n;i++)
    {
        chuaxet[i] = 1;
    }
    queue<int>q;
    q.push(k);
    res.push_back(k);
    chuaxet[k] = 0;
    while( q.size() != 0)
    {
        int dem=1;
        int s = q.front();
        res.push_back(s);
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[s][i] == 1 && chuaxet[i] == 1)
            {
                q.push(i);
                chuaxet[i] = 0;
            }
        }
        cout << "Buoc " << dem << " :";
        showq(q);
        for(int i=0;i<res.size();i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        dem++;
    }
}


int main() 
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    int a[n+1][n+1];
    vector<vector<int>> res;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            res[i-1].push_back(a[i][j]);
        }
    }
    int k; cin >> k;
    // BFS(k, n, res);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
    