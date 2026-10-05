# include <stdio.h>
int main()
{
	int total,change,n,k,d;
	scanf("%d%d",&n,&k);
	d=n;
	total=n;
	while(d>=k){
		change=d/k;
		total=total+change;
		d=d%k+change;
	}
	printf("%d",total);
	return 0;
}

