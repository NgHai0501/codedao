#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, pair<int, int>>a, pair<string, pair<int, int>>b)
{
    if(a.second.first != b.second.first) return a.second.first > b.second.first;
    else if(a.second.second !=b.second.second) return a.second.second > b.second.second;
    return a.first < b.first;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    map<string, pair<int, int>> mp;
    while(getline(cin,s))
    {
        string team1="", team2="";
        int i=1;
        while(s[i]!=']')
        {
            team1+=s[i]; 
            i++;
        }
        i+=2;
        int x=0,y=0;
        while(s[i]!=' ')
        {
            x = x*10 + (s[i]-'0');
            i++;
        }
        i+=3;
        while(s[i]!=' ')
        {
            y = y*10 + (s[i]-'0');
            i++;
        }
        i+=2;
        while(i<s.size()-1)
        {
            team2+=s[i];
            i++;
        }
        if(mp.count(team1)==0)
        {
            mp[team1].second = mp[team2].first = 0;
        }

        if(mp.count(team2)==0)
        {
            mp[team2].second = mp[team2].first = 0;
        }

        if(x>y)
        {
            mp[team1].first +=3;
        }
        else if(x<y)
            {
                mp[team2].first +=3;
            }
        else 
        {
            mp[team1].first+=1;
            mp[team2].first+=1;
        }
        mp[team1].second += x-y;
        mp[team2].second += y-x;
    }
    vector<pair<string, pair<int, int>>>v;
    for(auto it:mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
}