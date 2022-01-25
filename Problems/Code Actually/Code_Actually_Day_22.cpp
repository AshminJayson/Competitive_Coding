#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rotation (int &n, vector <int> &a , vector <int>  &acopy )
{
        int q=n;
        while(q--)
        {
            if(a==acopy)
            {
            cout<<"YES"<<endl;
            return;
            }
            else
            {
              for(int j=0;j<=n;j++)
              {
                  a.push_back(a[0]);
                  a.erase(a.begin());
              }
              
            }
        }
        cout<<"NO"<<endl;

}
int main() 
{
    int t,n,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        if(n == 1)
        {
            cout << "YES\n";
            continue;
        }
        vector <int> acopy(a.begin(),a.end());
        sort(acopy.begin(),acopy.end());
        rotation(n,a,acopy);
        a.clear();
        acopy.clear();
    }
    return 0;
}