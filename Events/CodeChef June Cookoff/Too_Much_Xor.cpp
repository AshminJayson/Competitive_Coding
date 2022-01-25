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
    vector <int> a(n);

    for(auto &x : a)
        cin >> x;
    
    if(n == 1)
        cout << "0\n";
    else if(n == 2)
    {
        if(a[0] == a[1])
            cout << "-1\n";
        else
            cout << "0\n";
    }
    else if(n == 3)
    {
        vector <tuple <int, int, int>> b;
        bool poss = true;
        if(!a[1] && a[0])
            b.push_back(make_tuple(1, 2, 3));
        else if(!a[1] && a[2])
            b.push_back(make_tuple(2, 3, 1));
        else if(a[0] != a[1] || a[0] == a[1] && a[1] == a[2] && a[0] == 0)
        {   cout << "-1\n";
            poss = false;
        }
        else if(a[0] == a[2])
            b.push_back(make_tuple(1, 3, 2));

        if(poss)
        {
            cout << b.size() << "\n";
            for(auto [x, y, z] : b)
                cout << x << " " << y << " " << z << " \n";
            
        }
    }
    else
    {
        if(count(a.begin(), a.end(),0) == n)
            cout << "-1\n";
        else
        {
            set <int> odds, evens;
            for(int i = 0; i < n; i++)
            {
                if(i % 2 == 0)
                    evens.insert(a[i]);
                else
                    odds.insert(a[i]);
            }

            if(odds.size() == evens.size() && odds.size() == 1)
            {
                if(*odds.begin() == *evens.begin())
                    cout << "0\n";
                else
                {
                    vector <tuple <int, int, int>> c;
                    for(int i = 1; i < n; i += 2)
                        c.push_back(make_tuple(1, 3, i + 1));
                    cout << c.size() << "\n";
                    for(auto [x, y, z] : c)
                        cout << x << " " << y << " " << z << " \n";
                }
            }
            else
            {
                vector <tuple <int, int, int>> c;

                int fl = a[0], sl = -1;
                for(int i = 1; i < n; i += 2)
                {
                    if(fl != a[i])
                    {
                        sl = i;
                        break;
                    }
                }
                
                if(sl == -1)
                {
                    int fr = a[1], sr = -1;
                    for(int i = 3; i < n; i += 2)
                    {
                        if(fr != a[i])
                        {
                            fr = i;
                            break;
                        }
                    }

                    for(int i = 0; i < n; i += 2)                
                        c.push_back(make_tuple(2, sr + 1, i + 1));
                    for(int i = 1; i < n; i += 2)
                        c.push_back(make_tuple(1, 3, i + 1));

                    cout << c.size() << "\n";
                    for(auto [x, y, z] : c)
                        cout << x << " " << y << " " << z << " \n";
                }
                else
                {
                    for(int i = 1; i < n; i +=2)
                        c.push_back(make_tuple(1, sl + 1, i + 1));
                    for(int i = 0; i < n; i += 2)
                        c.push_back(make_tuple(2, 4, i + 1));

                    cout << c.size() << "\n";
                    for(auto [x, y, z] : c)
                        cout << x << " " << y << " " << z << " \n";
                }
            }

        }    
    }   
}
 
return 0;
}

