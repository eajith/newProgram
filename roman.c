#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[10000];
    scanf("%s",a);
    int b[2000],i;
    for(i=0;i<strlen(a);i++){
        if(a[i]=='I'){
            b[i]=1;
        }
        if(a[i]=='V'){
            b[i]=5;
        }
        if(a[i]=='X'){
            b[i]=10;
        }
        if(a[i]=='C'){
            b[i]=100;
        }
        if(a[i]=='L'){
            b[i]=50;
        }
    }
    int sum=0;
    for(i=0;i<strlen(a);i++){
        if(b[i]<b[i+1]){
            sum+=b[i+1]-b[i];
            i++;
            continue;
        }
        sum+=b[i];
    }
    printf("%d",sum);
} 
