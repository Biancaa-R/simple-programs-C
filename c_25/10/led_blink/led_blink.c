# include <reg51.h>
// for 11.0592MHz crystal
void delay(unsigned int count){
	unsigned int i;
	while(count)
	{
		i=115;
		while(i>0)
		{
			i--;
			count--;
			}
		}
	}
		
void main()
{	while(1){
		P2=0x00;
		delay(10);
		P2=0xFF;
		delay(10);
	}
}
			