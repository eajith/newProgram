#include <stdio.h>

int main(void) {
	char a[1001];
	scanf("%s",a);
	int i;
	for(i=strlen(a)-1;i>=0;i--){
		if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
			printf("%c",a[i]);
		}
	}
	return 0;
}
