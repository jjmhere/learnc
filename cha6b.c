#include "stdio.h"
void printplus(void);
void ravio(int ra);
void expt(int ex);
int main()
{
	int a[101] = {0};
	int t1,t2,t;
	int x;
	int num1,num2;
	t1 = t2 = 0;
	t = 1;
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
	switch(t)
	{
		case 0:
			{
				printf("%d",a[t]);
			}; break;
		case 1:
			{
				if(a[1] == 0)
				{
					printf("%d",a[0]);
				}
				else if(a[1] == 1)
				{
					printf("x");
					if(a[0] > 0)
					{
						printf("+%d",a[0]);
					}
					if(a[0] < 0)
					{
						printf("%d",a[0]);
					}
					
				}
				else
				{
					printf("%dx",a[1])
					if(a[0] > 0)
					{
						printf("+%d",a[0]);
					}
					if(a[0] < 0)
					{
						printf("%d",a[0]);
					}
				}
				
			};break;
		default:
			{
				while(a[t] == 0)
				{
					if(t == 0)
					break;
					t--;
				}
				if(a[t] == 1)
				printf("x%d",t);
				else
				printf("%dx%d",a[t],t);
				t--
				while(t > 0)
				{
					
				}
			};break;
	}

	return 0;
}
void ravio(int ra)
{
	if(ra > 0)
	{
		printf("+%d",ra);
	}
	if(ra < 0)
	{
		printf("%d",ra);
	}
}
void expt(int ex)
{
	if(ex == 1)
	{
		printf("x");
	}
	if(ex > 1)
	{
		printf("x%d",ex);
	}
}
