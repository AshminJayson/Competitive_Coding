/*
How_To_Win

Practice Problems for IEEE Xtreme (Let's Code Day 1)

There's a new system in town, specifically one for calculating a programmer's worth.
Consistency is everything when it comes to learning and development and being consistent helps win contests too.

Thsi new system assings points to a programmer based on one's activities and gives them a rating.

The points is calculated as follows : 
- A contest win is given 100 points + an additional 20 - rank is the contest rank falls below 20
- An open source contribution is given 300 points
- Building a new project gives them anywhere between 50 - 1000 points
- Conducting a coding event gives them 50 points.

Also nothing in this world is ever fair, therefore the system grants its pro users 1 rating per 200 points 
and its regular users 1 rating per 400 points.

Your goal is to predict the rating given to a user by this system based on their activities.

Input : 

- An integer t denoting the number of users
For each user:
First line contains an integer followed by a string member denoting activities, "REGULAR" or "PRO" respectively,
where activities denotes number of activities of the user, member denotes whether the user is a pro or regular user.
For each of the next activities lines, each line contains an activity. An activity can be of four types as defined above.
Contest Win : Input will be of form of CONTEST_WON RANK, where RANK denotes the rank of the user.
OS Contribution : Input will be of form of CONTRIBUTOR.
Project Building : Input will be of form of PROJECT VALUE, where VALUE denotes the VALUE of the project.
Event Hosting : Input will be of form of EVENT_HOSTED.


Output : 

For each user, return the value of their rating.

*/


// Code : 

#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
//start_of_debug
template <class T>
void _vals(T a){cerr << a << " ";}
template <class T>
void _vals(vector <T> a){
 cerr << " [ ";
 for(auto i : a)
  cerr << i << " ";
 cerr << "] ";
}
template <class T, class V>
void _vals(map <T, V> a){
 cerr << " [";
 for(auto i : a)
  cerr << " [ " << i.first << " , " << i.second << " ] ";
 cerr << "] ";
  
}
#ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x << " "; _vals(x); cerr << "\n"
#else
  #define debug(x)
#endif
#define test cout << "Working\n"
//end_of_debug
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define pb push_back

void solution()
{

    #ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
    #endif
 
    int acts;
    string orgin;
    cin >> acts;
    cin >> orgin;
    lli total = 0;
    while(acts--)
    {
        string act;
        cin >> act;
        if(act == "CONTRIBUTOR"){
            total += 300;
            continue;
        }
        else if(act == "EVENT_HOSTED"){
            total += 50;
            continue;
        }

        int rop;
        cin >> rop;

        if(act == "CONTEST_WON")
        {
                total += 300;
                if(rop < 20)
                    total += 20 - rop;
        }
        else
            total += rop;
    }

    int redmonths;
    if(orgin == "PRO")
        redmonths = total / 200;
    else    
        redmonths = total / 400;

    cout << redmonths << lb;

}
int main()
{

IO;
start()
 solution();
return 0;
}


//Test Cases

// 2
// 4 PRO
// CONTEST_WON 1
// CONTRIBUTOR
// PROJECT 100
// EVENT_HOSTED
// 4 REGULAR
// CONTEST_WON 1
// CONTRIBUTOR
// PROJECT 100
// EVENT_HOSTED


// 3
// 1

// 3
// 3 PRO
// CONTEST_WON 1
// CONTRIBUTOR
// EVENT_HOSTED
// 2 REGULAR
// CONTEST_WON 1
// EVENT_HOSTED
// 5 REGULAR
// CONTEST_WON 15
// CONTRIBUTOR
// PROJECT 200
// PROJECT 100
// EVENT_HOSTED

// 3
// 0
// 2

// 5
// 3 PRO
// CONTEST_WON 1
// CONTRIBUTOR
// EVENT_HOSTED
// 2 REGULAR
// CONTEST_WON 1
// EVENT_HOSTED
// 5 REGULAR
// CONTEST_WON 15
// CONTRIBUTOR
// PROJECT 200
// PROJECT 500
// EVENT_HOSTED
// 2 REGULAR
// CONTEST_WON 15
// EVENT_HOSTED
// 1 REGULAR
// CONTEST_WON 15


// 3
// 0
// 3
// 0
// 0