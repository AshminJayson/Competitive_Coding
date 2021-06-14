#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
string s;
cin>>s;
int counter=0;

int array[s.length()];
for(int i=0;i<s.length();i++)
{   
    array[i]=int(s[i]);

}
 
sort(array,array+s.length());

for(int i=0;i<s.length()-1;i++)
{
    int fl=array[i];
    int center=array[i+1];
    if(fl==center)
    {   i++;
        
        if(center==array[i+1])
        {
            counter++;
            i++;
        }
        
        for(int j=0;j<s.length();j++)
        {
            
            if(center!=array[j] && array[j]!=fl)
            {
                counter++;
                center=array[j];
            }
            else if(array[j]==fl)
            {
                if(j>i)
                i++;

                center=array[j];
            }
        }
    }
    

}

cout<<counter<<"\n";
return 0;
}