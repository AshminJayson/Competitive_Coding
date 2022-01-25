/*Supergirl wants to save planet form asteroid. She has an List of integers
representing asteroids in a row. For each asteroid, the absolute value
 represents its size, and the sign represents its direction (positive
 meaning right, negative meaning left). But since we are in the fantasy
 world these asteroids are also special, each of the asteroid moves at
 the same speed.

Supergirl wants to find out the state of the asteroids after all collisions.
 If two asteroids meet, the smaller one will explode. If both are the same
 size, both will explode. Two asteroids moving in the same direction will
  never meet.*/

  /*INPUT
-The first line of the input contains an integer T denoting the number of test cases.
-Each test case will contain N space seperated elements of List.
OUTPUT
-The state of the asteroids after all collisions.
-If after collision no astroides left then ouput NOTHING.
CONSTRAINTS
1 ≤ T ≤ 10000
1 ≤ N ≤ 2000
-1000 ≤ N[i] ≤ 1000 */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//Solution Function
void collision(int Asteroid[],int T)
{
  int sum;
for(int i=0;i<T;i++)
{sum=Asteroid[i];
  for(int j=0;j<T;j++)
  {if(Asteroid[i]==0)break;
    if(Asteroid[i]*Asteroid[j]<0 && Asteroid[i]!<0)
    {
      if(abs(Asteroid[i])>abs(Asteroid[j]))
        Asteroid[j]=0;
      else if(abs(Asteroid[i])==abs(Asteroid[j]))
      {
      Asteroid[i]=0;
      Asteroid[j]=0;
    }
      else
      Asteroid[i]=0;

    }
  }
  cout<<"\nAsteroid "<<i<<"is";

  if(Asteroid[i]==0)
  cout<<"Destroyed";
  else
  cout<<"Not Destroyed";


}
if(sum==0)
cout<<"NOTHING";
}


int main()
{
  int T;
  cout<<"Enter the number of Asteroids:";
  cin>>T;

  int Asteroid[T];
  for(int i=0;i<T;i++){
    cout<<"\nEnter the Size and Direction of asteroid"<<i;
      cin>>Asteroid[i];}

  collision(Asteroid,T);


  getch();
  return 0;


}
