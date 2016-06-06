#include <stdio.h>

int main(void) {
	char a[1000];
	scanf("%s",a);
	int i;
	if(strlen(a)%2==0){
	for(i=0;i<strlen(a);i+=2){
		char temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	else{
		for(i=0;i<strlen(a)-1;i++){
			char temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp		
		}
	}
	printf("The reverse of string is:%s",a);
	return 0;
}
