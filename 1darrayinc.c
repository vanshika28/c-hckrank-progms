#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long i , n  , sum=0;
     long *p = (long*)malloc(n * sizeof(long));
     scanf("%d", &n);
     for(i=0;i<n;i++){
         scanf("%d",&p[i]);
             sum = sum + p[i];}
         
printf("%d", sum);
     

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

