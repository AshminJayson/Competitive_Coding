#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string name;
    long phoneNumber;
    
    cin>>n;  
     
    map <string ,long> phoneBook;
    for(int i=0;i<n;i++)
    {  
        cin>>name;
        cin>>phoneNumber;
        phoneBook[name]=phoneNumber;
        
    }
    
    
    while(cin>>name)
    {
        if(phoneBook.find(name)==phoneBook.end()){
        cout<<"Not found\n";}
        else
        cout<<name<<"="<<phoneBook.find(name)->second<<"\n";
    }
        
    return 0;
}
