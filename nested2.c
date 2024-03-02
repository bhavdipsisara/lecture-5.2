#include<stdio.h>

int main()

{
	int a,b,c,d;
	
	printf("enter value a=");
	scanf("%d",&a);
	
	printf("enter value b=");
	scanf("%d",&b);
	
	printf("enter value c=");
	scanf("%d",&c);
	
	printf("enter value d=");
	scanf("%d",&d);
	
	if(a>b)
	{
        if(a>c)
        {
        	if(a>d)
        	{
        		printf("a is big");
			}
			else
			{
				printf("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big");
			}
			else
			{
				printf("d is big");
			}
			
		}
    }
    else
    {
    	if(b>c)
    	    {
    	    	if(b>d)
    	    	{
    	    		printf("b is maximum");
				}
				else
				{
					printf("d is maximum");
				}
		    }
		else
            {	
		        if(c>d)
		        {
		           	printf("c is maximum");
				}
				else
				{
				    printf("d ismaximum");
				}
			
		    }
    }
}
	