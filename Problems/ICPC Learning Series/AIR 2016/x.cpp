#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 


int maxSubarraySum(int arr[], int size)
{
    int max_ending_here = 0, max_so_far = INT_MIN;
    for (int i = 0; i < size; i++) {
       
        // include current element to previous subarray only
        // when it can add to a bigger number than itself.
        if (arr[i] <= max_ending_here + arr[i]) {
            max_ending_here += arr[i];
        }
       
        // Else start the max subarry from current element
        else {
            max_ending_here = arr[i];
        }
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{


    int arr[]= {2, 1 , 4 , 5};
    cout << maxSubarraySum(arr,4);

 
return 0;
}