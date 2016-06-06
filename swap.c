#include <stdio.h>

int main(void) {
	int len;
	scanf("%d",&len);
	char a[len+1];
	scanf("%[^\n]s",a);
	int i;
	if(len%2==0){
	for(i=0;i<len;i+=2){
		char temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	else{
		for(i=0;i<len-1;i++){
			char temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp		
		}
	}
	printf("The reverse of string is:%s",a);
	return 0;
}
