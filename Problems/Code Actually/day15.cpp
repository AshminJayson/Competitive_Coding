#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
int m, n;
cin >> m >> n;

int arr[m][n];

for(int i = 0; i < m; i++)
{
    for(int j = 0; j < n; j++)
    {
        cin >> arr[i][j];
    }
}

vector <int> print;
int elements = 0;
int i = 0, j = 0;

while(elements < n * m)
{   int ti = i, tj = j;
    for(j = i; j < n - i && elements < n * m; j++)
    {
        print.push_back(arr[i][j]);
        elements++;
    }
    
    j--;

    for(i++; i < m - ti && elements < n * m ; i++)
    {
        print.push_back(arr[i][j]);
        elements++;
    }

    i--;

    for(j = n - ti - 2; j >= ti && elements < n * m; j--)
    {
        print.push_back(arr[i][j]);
        elements++;    
    }

    j++;

    for(i--;i >= ti + 1 && elements < n * m; i--)
    {
        print.push_back(arr[i][j]);
        elements++;
    }
    i = ti;
    j = tj;
    i++;
}
    for(auto &x : print)
    cout << x << " ";
    
return 0;
}