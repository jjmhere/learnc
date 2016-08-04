#include "stdio.h"
int main()
{
	int a[101] = {0};
	int t1,t2,t;
	int x;
	int num1,num2;
	t1 = t2 = 0;
	t = 1;
	//输入第一个多项式 
	do
	{
		scanf("%d %d",&num1,&num2);
		if(num1<101)
		a[num1] = num2;
		//判断输入的第一个多项式中最大的幂指数 
		if(t && num2)
		{
			t1 = num1;
			t = 0;
		}
	}while(num1);
	//输入第二个多项式
	t = 1;
	 do
	{
		scanf("%d %d",&num1,&num2);
		if(num1<101)
		a[num1] += num2;
		//判断输入的第二个多项式中最大的幂指数 
		if(t && num2)
		{
			t2 = num1;
			t = 0;
		}
	}while(num1);
	//判断两个多项式中最大的的幂指数 
	t = t1;
	if(t2 > t1)
	{
		t = t2;
	}
	t2 = t;
	for(;a[t] == 0 && t >=0; t--)
	{
	}
	if(t < 0)
	t = 0;
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
				else if(a[1] == -1)
				{
					printf("-x");
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
					printf("%dx",a[1]);
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
				//ax2+bx+c
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
				
				if(a[0] > 0)
				{
					printf("+%d",a[0]);
				}
				if(a[0] < 0)
				{
					printf("%d",a[0]);
				}
			};break;
	}

	return 0;
}

