#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
start()
{
    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        int ts = nums[i];
        sum = max(sum, ts);
        for(int j = i + 1; j < n; j++)
        {
            ts += nums[j];
            sum = max(sum, ts);
        }
    }

    cout << sum << "\n";
}
 
return 0;
}