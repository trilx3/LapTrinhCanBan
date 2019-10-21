#include <stdio.h>
int main()
{
	float a;
	printf("NHAP DIEM DI : ",a);
	scanf("%f",&a);
	while(a<0||a>10)
		{
			printf(" NHAP SAI ROI NHAP LAI DI \3 \n ");
			printf("NHAP DIEM DI: ",a);
			scanf("%f",&a);
		}
	printf(" DIEM DAY NE %.1f",a);
}
