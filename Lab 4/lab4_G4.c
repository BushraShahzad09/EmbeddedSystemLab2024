#include<p89v51rx2.h>

sbit buzzer = P0^3;

void delay(unsigned int dela){
	unsigned int i, j;
	for(i =0; i<=1000; i++)
	for(j=0; j<= dela; j++);
	
}
void main(void)
	{
			RxD = 1;
			TxD = 1;
			WR = 1;
			RD = 1;
		while(1)
		{
			delay(200);
			if( RxD == 1 && TxD == 1 && WR == 1 && RD == 1 && !(INT0 ==1 && INT1==1 && T1==1 && T0==1) )
			{
				buzzer = 0;
				delay(50);
				buzzer = 1;
				delay(100);
				RxD = INT0;
				TxD = INT1;
				WR = T0;
				RD = T1;
				
			}
			
			else if(RD == 0)
			{
				#T1=1;
				RD=1;
			}
			else if(WR == 0)
			{
				#T0=1;
				WR=1;
				#T1=0;
				RD =0;
			}
			else if(TxD == 0)
			{
				#INT1=1;
				TxD =1;
				#T0=0;
				WR=0;
				#T1=1;
				RD =0;
			}
			else if(RxD == 0)
			{
				#INT0 =1;
				RxD =1;
				#INT1=0;
				TxD =0;
				#T0=1;
				WR=0;
				#T1=0;
				RD =0;
			}
			
		}
	}
				
				
				