#include <stdio.h>

int main(void)
{	
	int ture_1 , false_0 ;
	bool x; 
	x = scanf("%d",&ture_1);
	while (x)  
	{	
	
	printf("enter :");
	x = scanf("%d",&ture_1);
	while(ture_1 > 100)
	printf("%d \n",ture_1--);
    }
	printf("%d false \n",ture_1);
	return 0;
}
