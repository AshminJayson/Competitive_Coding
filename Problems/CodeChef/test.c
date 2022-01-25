#include <stdio.h>
 
int main()
{
FILE *ptr;
ptr = fopen("hello.txt", "a++_");
char arr[20];
fgets(arr, 20, ptr);

    puts(arr);
fgets(arr, 20, ptr);
    puts(arr);

rewind(ptr);
fgets(arr, 20, ptr);
    puts(arr);


 
return 0;
}