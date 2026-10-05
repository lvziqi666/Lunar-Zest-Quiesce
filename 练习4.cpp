# include <stdio.h>
int main()
{
	int shu;
	int jishu;
//	scanf("%d",&jian);
	//for(jian=2;jian<=100;jian++){
	int jian=2;	
	while(jishu<50){
		int biao=1;
			
			jian++;
		for(shu=2;shu<jian;shu++){
			if(jian%shu==0){
				biao =0;
				break;
			}
			}
		if(biao==1){
			printf("%d ",jian);
			jishu++;
		}
	}
		return 0;
		}
