#include <stdio.h>
int main()
{
	int a=1000;
	for(;a<=9999;a++)
		{	if(a%6==0&&a%7==0)
			printf ("%5d",a);
		}
	return 0;
}
