#include <iostream>
#include <conio.h>

using namespace std;

//function to check possibility of car completing the circle
int possibility(int Gas[] , int Cost[], int n){

//cout<<Gas[0];Values are input well
  int remgas=0;
  int start=0;
  int i=0;
  while(i<n){remgas=remgas+Gas[i]-Cost[i];i++;}

  if(remgas<0)return -1;
  else{
    remgas=0;
    for(i=0;i<n;i++){
      remgas+=Gas[i]-Cost[i];
      if(remgas<0){
        start=i+1;
        remgas=0;


      }


    }

  }
  return start;
}

int main()
{
int n;
cout<<"Enter the Number of Gas Stations:\n";
cin>>n;
int Gas[n],Cost[n];

for(int i=0;i<n;i++){
  cout<<"\nEnter the amount of fuel in Gas Station"<<i<<":";
 cin>>Gas[i];
 cout<<"\nEnter the amount of fuel need to reach next Gas Station" <<":";
 cin>>Cost[i];
}

int y=possibility(Gas,Cost,n);
cout<<y;

getch();
return 0;
}
