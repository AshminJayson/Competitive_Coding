#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector <int> bin;


void to_binary(int n, int bits)
{   
    if(n == 0)
    {   
        while(bits--)
        bin.push_back(0);
    }
    else{

    while(n != 0)
    {
        bin.push_back(n % 2);
        n = n / 2;
        bits--;
    }
    while(bits--)
    bin.push_back(0);
    }

    reverse(bin.begin(), bin.end());
    
}

void to_gray()
{
    for(int i = bin.size() - 1; i > 0; i--)
    {
        bin[i] = bin[i] ^ bin[i - 1];
    }
}

int to_dec()
{   int num;
        int k = 0;
        for(int i = bin.size() - 1; i >= 0; i--)
        {   
            if(bin[i] == 1)
            {
              num += pow(2, k);  
            }
            k++;
        }
    
    return num;
}


int main()
{

IO;

int n;
cin >> n;



for(int i = 0; i < pow(2,n); i++)
{
    to_binary(i, n);

    to_gray();
    
    // for(int i = 0; i < bin.size(); i++)
    // cout << bin[i];
    // cout<<"\n";
    int val = to_dec();
    cout << val << " ";
    bin.clear();

}



 
return 0;
}