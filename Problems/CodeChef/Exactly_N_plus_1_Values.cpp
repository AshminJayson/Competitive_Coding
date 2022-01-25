#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int lli;

void solution(){
    lli n; cin >> n;
    lli sum = 0;

    if(n == 1){
        cout << 1 << " " << 1 << "\n";
        return;
    }
    
    for(int i = 1; i < n; i++){
        cout << i << " ";
        sum += i;
        if(i == n - 1){
            cout << i << " "; sum += i;
        }
    }

    cout << (lli)pow(2, n) - (lli)sum << "\n";
}

int main(){

    lli t; cin >> t;
    while(t--)solution();
    return 0;    
}