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
    maxTime += k;
    else
    maxTime += time[i + 1] - time[i];
}

maxTime += k;
cout << maxTime << "\n";

return 0;
}
