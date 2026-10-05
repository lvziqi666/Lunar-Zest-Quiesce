# include <stdio.h>
int main()
 {
	int a,b,c,d,e,f,g,h,i,j,z,y,t;
	y=30;
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
scanf("%d",&z);
	t=0;

	if(z>=a-y) t++;	
	if(z>=b-y) t++;
	
	if(z>=c-y) t++;
	
	if(z>=d-y) t++;
	
	if(z>=e-y) t++;
	
	if(z>=f-y) t++;
	
	if(z>=g-y) t++;
	
	if(z>=h-y) t++;
	
	if(z>=i-y) t++;
	
	if(z>=j-y) t++;

printf("%d",t);
	return 0;
}

