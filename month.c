#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[][11] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	char *b[] ={"0","January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	int i = 1;
	
	printf("�������·ݣ�");
	scanf("%d",&i);
	i--;
	while(i < 12)
	{
		printf("��Ҫ����%s\n",a[i]);
		printf("\n a[%d]�ĵ�ַ��:%p\n",i,&a[i]);
		printf("len = %d\n",strlen(a[i]));
		printf("��Ҫ����%s\n",b[i]);
		printf("\n b[%d]�ĵ�ַ��:%p\n",i,b[i]);
		printf("len = %d",strlen(b[i]));
		printf("�������·ݣ�");
		
		scanf("%d",&i);
		
		
	}
	printf("sizeof(a[]) = %d,sizeof(b[]) = %d",sizeof(a),sizeof(b));
	return 0;
 } 
