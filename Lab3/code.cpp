#include <p89v51rx2.h>
sbit l1 = P3 ^ 0;
sbit l2 = P3 ^ 1;
sbit l3 = P3 ^ 6;
sbit l4 = P3 ^ 7;
sbit s0 = P3 ^ 2;
sbit s1 = P3 ^ 3;
sbit s2 = P3 ^ 4;
sbit s3 = P3 ^ 5;
void delay(unsigned int x)
{
	unsigned int i, j;
	for (i = 0; i <= 1000; i++)
	{
		for (j = 0; j <= x; j++)
		{
		}
	}
}

void counter(unsigned int n)
{
	int i = 0;
	for (i = n - 1; i >= 0; i--)
	{

		if(i & (1){
			l1 = 0;
		}else{
			l1 = 1;
		}
		if(n>=4){
			if (i & (2))
			{
				l2 = 0;
			}
			else
			{
				l2 = 1;
			}
	}
		if(n>=8){
			if (i & (8))
			{
				l3 = 0;
			}
			else
			{
				l3 = 1;
			}
	}
		
if(n>=16){
			if (i & (16))
			{
				l4 = 0;
			}
			else
			{
				l4 = 1;
			}
	}
delay(200);
	}
}

void main(void)
{

	while (1)
	{
		if (s0 == 0)
			counter(2);
		if (s1 == 0)
			counter(4);
		if (s2 == 0)
			counter(8);
		if (s3 == 0)
			counter(16);
	}
}