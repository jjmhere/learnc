#include "stdio.h"
int main()
{
	int a[101] = {0}; //�����±����ָ����Ԫ�ش����ָ����ϵ�� 
	int t1,t2,t;	//�����ж��±� 
	int num1,num2;	//������������ 
	t1 = t2 = 0;
	t = 1; //��tȡ�õ�һ�������ָ�� 
	//�����һ������ʽ 
	do
	{
		scanf("%d %d",&num1,&num2);
		if(num1<101)
		a[num1] = num2;
		//�ж�����ĵ�һ������ʽ��������ָ�� 
		if(t && num2)
		{
			t1 = num1;
			t = 0;
		}
	}while(num1);
	//����ڶ�������ʽ
	t = 1;
	 do
	{
		scanf("%d %d",&num1,&num2);
		if(num1<101)
		a[num1] += num2;
		//�ж�����ĵڶ�������ʽ��������ָ�� 
		if(t && num2)
		{
			t2 = num1;
			t = 0;
		}
	}while(num1);
	//�ж���������ʽ�����ĵ���ָ�� 
	t = t1;
	if(t2 > t1)
	{
		t = t2;
	}
	t2 = t;
	
	//�ҵ��ϲ�����ʽ�����Ĳ�Ϊ0��ϵ�� 
	for(;a[t] == 0 && t >=0; t--)
	{
	}
	
	//�������Ԫ�ض�Ϊ0�����a[0]��ֵ��ʼ��� ��0 
	if(t < 0)
	t = 0;
	switch(t)
	{
		//�������ָ��Ϊ0��ֱ�����a[0] 
		case 0:
			{
				printf("%d",a[0]);
			}; break;
		//�������ָ��Ϊ1 
		case 1:
			{
			  /*
			  	1.a[1] = 1		a[0] > 0	���x��+����a[0]
			  	2.a[1] = 1		a[0] < 0	���x��a[0]		 
				3.a[1] = 1 		a[0] = 0	���x
				4.a[1] = -1		a[0] > 0	���-x��+����a[0]
			  	5.a[1] = -1		a[0] < 0	���-x��a[0]		 
				6.a[1] = -1 	a[0] = 0	���-x
				7.a[1] =�������� a[0] > 0	���a[1]x��+����a[0]
				8..a[1] =�������� a[0] < 0	���a[1]x����a[0]
				.a[1] =�������� a[0] = 0	���a[1]x
				*/ 
				if(a[1] == 1)
				{
					printf("x");
					if(a[0] != 0)
					{
						printf("%+d",a[0]);
					}
					
				}
				else if(a[1] == -1)
				{
					printf("-x");
					if(a[0] != 0)
					{
						printf("%+d",a[0]);
					}
				}
				else
				{
					if(a[0] != 0)
					{
						printf("%dx%+d",a[1],a[0]);
					}
				}
				
			};break;
		default:
			{
				/*��ߴ���ϵ��Ϊ1 ֱ�����x��ָ��
				 -1 ֱ�����-x��ָ��
				 0�������
				 �����������a[t]x��ָ�� 
				 */ 
				if(a[t] == 1)
				printf("x%d",t);
				else if(a[t] == -1)
				printf("-x%d",t);
				else 
				printf("%dx%d",a[t],t);
				t--;
				while(t > 0)
				{
					if(a[t] > 1)
					{
						printf("+%d",a[t]);
						if(t == 1)
						{
							printf("x");
						}
						if(t > 1)
						{
							printf("x%d",t);
						}
					}
					if(a[t] < -1)
					{
						printf("%d",a[t]);
						if(t == 1)
						{
							printf("x");
						}
						if(t > 1)
						{
							printf("x%d",t);
						}
					}
					if(a[t] == 1)
					{
						if(t == 1)
						{
							printf("+x");
						}
						if(t > 1)
						{
							printf("+x%d",t);
						}
					}
					if(a[t] == -1)
					{
						if(t == 1)
						{
							printf("-x");
						}
						if(t > 1)
						{
							printf("-x%d",t);
						}
					}
					t--;
				}
				
				if(a[0] != 0)
				{
					printf("%+d",a[0]);
				}
			};break;
	}

	return 0;
}

