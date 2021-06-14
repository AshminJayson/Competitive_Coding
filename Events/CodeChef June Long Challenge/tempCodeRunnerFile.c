#include <stdio.h>
#include <conio.h>
 

struct student
{
    char name[20];
    int mark1;
    int mark2;
}; 
int  main()
{

student saleekh;
saleekh.name="saleekh";
saleekh.mark1=100;
saleekh.mark2=100;

printf("%d",saleekh.mark1);

 
return 0;
}