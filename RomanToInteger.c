#include <stdio.h>

int main(void) {
	char a[1001];
	scanf("%s",a);
	int b[strlen(a)];
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
			b[i]=50;
		}
		if(a[i]=='L'){
			b[i]=100;
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
	return 0;
}
