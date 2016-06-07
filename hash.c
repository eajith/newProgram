#include <stdio.h>

int main(void) {	
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	int h[1001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		h[a[i]]++;
	}
	for(i=0;i<1001;i++){
		if(h[i]>1){
			printf("%d ",i);
		}
	}
	return 0;
}
