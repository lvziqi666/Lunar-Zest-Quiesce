# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	
	int x,y;
	printf("我已经想好了一个数");
	do{
		printf("请猜这个数是多少：");
	scanf("%d",&x);
		y++;
		if(x==number){
			printf("你猜对了");
		}
		else if(x<number){
			printf("偏小\n");
		}
		else printf("偏大\n");
		
	}while(x!=number);
	printf("太好了，你用了%d次才出了答案",y);
}
