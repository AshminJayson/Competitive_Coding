#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
int n, k, maxtime = 0;
cin >> n >> k;
int time[n];
for(int i = 0; i < n; i++)
    cin >> time[i];

sort(time, time + n);
for(int i = 0; i < n - 1; i++)
{
    if(k <= time[i + 1] - time[i])
    maxtime += k;
    else
    maxtime += time[i + 1] - time[i];
}

maxtime += k;
cout << maxtime << "\n";

return 0;
}
