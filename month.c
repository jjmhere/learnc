#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[][11] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	char *b[] ={"0","January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	int i = 1;
	
	printf("请输入月份：");
	scanf("%d",&i);
	i--;
	while(i < 12)
	{
		printf("您要的是%s\n",a[i]);
		printf("\n a[%d]的地址是:%p\n",i,&a[i]);
		printf("len = %d\n",strlen(a[i]));
		printf("您要的是%s\n",b[i]);
		printf("\n b[%d]的地址是:%p\n",i,b[i]);
		printf("len = %d",strlen(b[i]));
		printf("请输入月份：");
		
		scanf("%d",&i);
		
		
	}
	printf("sizeof(a[]) = %d,sizeof(b[]) = %d",sizeof(a),sizeof(b));
	return 0;
 } 
