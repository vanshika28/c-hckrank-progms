#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,l;
char s[1000];
scanf("%[^\n]",&s);  
for(int i =0; i< strlen(s);i++){
    if(s[i] == ' '){
        printf("\n");    
    }
    else{
        printf("%c",s[i]);
    }
}
return 0;
}

