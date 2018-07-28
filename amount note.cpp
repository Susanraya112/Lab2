#include<stdio.h>
#include<conio.h>
main()
{
	int amount,a,b;
		printf("enter your amount:\n");
        scanf("%d",&amount);
		{			
		if(amount>500)
		a=amount/500;
		amount=amount%500;
		printf("number of 500 note requried is %d",a);
		}
			{
			if(amount>100)
			b=amount/100;
			amount=amount%100;
			printf("number of 100 note is %d",b);
			}
		getch();
}
