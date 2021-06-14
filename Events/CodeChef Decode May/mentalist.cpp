#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{

int score=0;
int turns=1;
string s;
cin>>s;

int m=0;
int n=s.size()-1;

int ar[27];
int k=26;
for(int i=0;i<27;i++)
{
    ar[i]=k--;
}

while((m<n && n>m) || m==n)
{
  if(turns%2!=0)
  {
      if(int(s[m])>int(s[n]))
      {
          score+=ar[int(s[n])-97];
          n--;
      }
      else{
          score+=ar[int(s[m])-97];
          m++;
      }
        
  }
  else{
      if(int(s[m])>int(s[n]))
      {
          m++;
      }
      else{
          n--;
      }

     }
    cout<<score<<"\n";
    turns++;
}


cout<<score;


return 0;
}