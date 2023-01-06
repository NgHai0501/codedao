#include<bits/stdc++.h>
using namespace std;

void in(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
	freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);

    int t; cin >> t;
    while(t--)
    {
        int n,S; cin >> n >> S;
        int check = 1;
        vector<int> b;
        set<int> s;
        if(n%2==1)
        {
            cout << "-1\n";
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i > S)
                {
                    if(i - S >=1 && i - S <=n)
                    {
                        b.push_back(i-S);
                        s.insert(i-S);
                    }
                    else
                    {
                        check = 0;
                        break;
                    }
                }
                else
                {
                    if(i+S >=1 && i+S <=n)
                    {
                        b.push_back(i+S);
                        s.insert(i+S);
                    }
                    else 
                    {
                        check = 0;
                        break;
                    }
                }
            }
            
            if(check == 1 && s.size()==b.size())
            {
                in(b);
            }
            else 
            {
                cout << "-1\n";
            }
        }
            }
        
}