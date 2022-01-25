#include <iostream> 
#include <conio.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int counter=0;
    int array[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(array[i] < array[k])
        break;
        else
        counter ++;
    }
    
    return 0;
    getch();
    
}
