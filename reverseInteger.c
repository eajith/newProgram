#include <iostream>
using namespace std;

int main() {
	int n,a[10001],i,j;
	scanf("%d",&n);
	while(n>0){
		a[i]=n%10;
		printf("%d",a[i]);
		n=n/10;
	}
	return 0;
}
