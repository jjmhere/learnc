#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[][11] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	char *b[] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	int i;
	
	printf("请输入月份：");
	scanf("%d",&i);
	i--;
	while(i < 12 && i >=0)
	{
		printf("您要的是%s\t",a[i]);
		printf("a[%d]的地址是:%p\t",i,&a[i]);
		printf("len = %d\n",strlen(a[i]));
		printf("您要的是%s\t",b[i]);
		printf("b[%d]的地址是:%p\t",i,b[i]);
		printf("len = %d\n",strlen(b[i]));
		printf("请输入月份：");
		
		scanf("%d",&i);
		i--;
		
		
		
	}
	printf("sizeof(a[i]) = %d,sizeof(b[i]) = %d\n",sizeof(a),sizeof(b));
	return 0;
 } 
