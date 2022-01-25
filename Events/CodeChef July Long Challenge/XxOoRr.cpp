#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"

int main()
{

IO;
start(){

int n, k, odds = 0;
cin >> n >> k;
vector <int> nums(n);
for(auto &x : nums)
    cin >> x;
// ENd of Input

lli totaloperations = 0;
for(auto &x : nums)
{
    if(x & 1)
    {
        odds++;
        x--;
    }
}

totaloperations += ceil((float)odds / k); // Ciel function return the smallest integer value less than or equal to
//the quotient

sort(nums.begin(), nums.end());

int i = 1;

bool flag = true;
while(flag)
{
    int p = pow(2, i++);
    int curroperations = 0;
    int setbitofp = p & -p;

    for(int j = 0; j < nums.size(); j++)
    {

        int setbitofarrayelement = nums[j] & -nums[j];
        if(setbitofp == setbitofarrayelement)
        {
            curroperations++;
            nums[j] = nums[j] - p;
        }

        if(nums[j] == 0)
        {
            nums.erase(nums.begin() + j);
            j--;
        }
    }

    if(nums.size() == 0)
        flag = false;

    totaloperations += ceil((float)curroperations / k);
}

    cout << totaloperations << lb;
}
return 0;
}