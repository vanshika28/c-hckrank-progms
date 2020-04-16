#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int k , num , sum =0;
scanf("%d" , &num);
while(num>0){
    k = num%10;
    sum = sum+k;
    num = num/10;
}
printf("%d" , sum);
return 0;
}
