#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


start(t)
{
    int n;
    cin >> n;

    //End of input

    int negones = 0, ones = 0, others = 0, zeroes = 0;

    while(n--)
    {
        int x;
        cin >> x;
        if(x == 1)
        ones++;
        else if(x == -1)
        negones++;
        else if(x == 0)
        zeroes++;
        else
        others++;
    }
    bool is_flawless = true;

    if( others > 1 || (negones > 1 && ones == 0) || (others > 0 && negones > 0))
    is_flawless = false;

    if(is_flawless)
    cout << "yes\n";
    else
    cout << "no\n";

}
 
return 0;
}
