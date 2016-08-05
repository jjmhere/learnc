#include "stdio.h"
int main()
{
	int a[101] = {0}; //数组下标代表指数，元素代表该指数的系数 
	int t1,t2,t;	//用于判断下标 
	int num1,num2;	//用于输入数据 
	t1 = t2 = 0;
	t = 1; //用t取得第一个输入的指数 
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
	
	//找到合并多项式后最大的不为0的系数 
	for(;a[t] == 0 && t >=0; t--)
	{
	}
	
	//如果所有元素都为0，则从a[0]的值开始输出 即0 
	if(t < 0)
	t = 0;
	switch(t)
	{
		//如果最大的指数为0，直接输出a[0] 
		case 0:
			{
				printf("%d",a[0]);
			}; break;
		//如果最大的指数为1 
		case 1:
			{
			  /*
			  	1.a[1] = 1		a[0] > 0	输出x、+、和a[0]
			  	2.a[1] = 1		a[0] < 0	输出x和a[0]		 
				3.a[1] = 1 		a[0] = 0	输出x
				4.a[1] = -1		a[0] > 0	输出-x、+、和a[0]
			  	5.a[1] = -1		a[0] < 0	输出-x和a[0]		 
				6.a[1] = -1 	a[0] = 0	输出-x
				7.a[1] =其他非零 a[0] > 0	输出a[1]x、+、和a[0]
				8..a[1] =其他非零 a[0] < 0	输出a[1]x、和a[0]
				.a[1] =其他非零 a[0] = 0	输出a[1]x
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
				/*最高次幂系数为1 直接输出x和指数
				 -1 直接输出-x和指数
				 0不做输出
				 其他数则输出a[t]x和指数 
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

