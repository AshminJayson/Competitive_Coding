#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start(x) int x;cin>>x;while(x--)
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//calc function

ll calc(vector <pair<int, int>> v, int n)
{
    ll ans = INT_MAX;
    vector <int> premin(n), premax(n), sufmin(n), sufmax(n);

    premin[0] = v[0].second;
    premax[0] = v[0].second;
    sufmin[n - 1] = v[n - 1].second;
    sufmax[n - 1] = v[n - 1].second;

    for (int i = 1; i < n; i++)
    {
        premin[i] = min(premin[i - 1], v[i].second);
        premax[i] = max(premax[i - 1], v[i].second);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        sufmax[i] = max(sufmax[i + 1], v[i].second);
        sufmin[i] = min(sufmin[i + 1], v[i].second);
    }

    for (int i = 0; i < n - 1; i++)
    {   ll b1 = premax[i] - premin[i];
        ll l1 = v[i].first - v[0].first;
        ll b2 = sufmax[i + 1] - sufmin[i + 1];
        ll l2 = v[n - 1].first - v[i + 1].first;
        ans = min(ans, (l1 * b1) + (l2 * b2));
    }

    return ans;
}

int main()
{


IO;
start(t)
{
    int n;
    cin >> n;

    vector <pair<int, int>> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y ;
        v1.push_back({x, y});
        v2.push_back({y, x});

    }
     if(n <= 2)
    {
        cout << "0\n";
        continue;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    ll area1 = calc(v1, n);
    ll area2 = calc(v2, n);

   cout << min(area1, area2)<<"\n";
}

 
return 0;
}