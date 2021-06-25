#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 

int main()
{

start()
{
    int n;
    cin >> n;
    vector <int> nums(n);
    bool flag = true;

    for(auto &x : nums)
        cin >> x;

    int small = INT_MAX;
    int spos = -1;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] < small)
        {
            small = nums[i];
            spos = i;
        }
    }

    // Can also be done with a change in approach listed below the main()
    for(int i = 0; i < spos - 1; i++)
    {
        if(nums[i] > nums[i + 1])
        {
            flag = false;
            break;
        }
    }
    
    if(!flag)
    cout << "NO\n";

    for(int i = spos; i < n - 1; i++)
    {
        if(nums[i] > nums[i + 1])
        {
            flag = false;
            break;
        }
    }
    
    if(nums[n - 1] > nums[0])
        flag = false;
    // End of changable section
    if(flag)
    cout << "YES\n";
    else
    cout << "NO\n";

}
 
return 0;
}

//Alternate sectional approach
    //rotation of the vector by placing the smallest element at index 0
    rotate(nums.begin(), nums.begin() + spos, nums.end());
    for(auto x : nums)
        cout << x;

    //checking for order of elements
    for(int i = 0; i < n - 1; i++)
    {
        if(nums[i] > nums[i + 1])
        {
            flag = false;
            break;
        }
    }
