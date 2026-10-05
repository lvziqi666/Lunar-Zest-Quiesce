# include <stdio.h>
int main()
{
	int sum,number,count;
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("%f",1.0*sum/count);
}
