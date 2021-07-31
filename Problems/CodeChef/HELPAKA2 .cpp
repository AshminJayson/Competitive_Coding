#include <bits/stdc++.h>
 
using namespace std;

long maxpossible(long diff[], long i, long n, long k, long x)
{
    if(i >= n)
    return 0;

    long r = 0;
    if(diff[i] <= diff[i-1])
    r = 1 + maxpossible(diff, i + 1, n, k, x);
    else
    {
        long a,b;
        a = b = -1;
        if(k >= (diff[i] - diff[i-1]))
        a = 1 + maxpossible(diff, i + 1, n, k - (diff[i] - diff[i - 1]), x);
        
        if(x != 0)
        b = 1 + maxpossible(diff, i + 1, n, k, x - 1);
        
        
        r = max(a, b);

        if(r == -1)
        return 0;
    }
 
    return r;
} 



int main()
{
long n, k, x;
cin >> n >> k >> x;
long diff[n];

for(long i = 0; i < n; i++)
    cin >> diff[i];

cout<<maxpossible(diff, 1, n, k, x);

return 0;
}

