#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[][11] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	char *b[] ={"January","February","March","April","May","June",
			"July","August","September","October","November","December"};
	int i;
	
	printf("�������·ݣ�");
	scanf("%d",&i);
	i--;
	while(i < 12 && i >=0)
	{
		printf("��Ҫ����%s\t",a[i]);
		printf("a[%d]�ĵ�ַ��:%p\t",i,&a[i]);
		printf("len = %d\n",strlen(a[i]));
		printf("��Ҫ����%s\t",b[i]);
		printf("b[%d]�ĵ�ַ��:%p\t",i,b[i]);
		printf("len = %d\n",strlen(b[i]));
		printf("�������·ݣ�");
		
		scanf("%d",&i);
		i--;
		
		
		
	}
	printf("sizeof(a[i]) = %d,sizeof(b[i]) = %d\n",sizeof(a),sizeof(b));
	return 0;
 } 
