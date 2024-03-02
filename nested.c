#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("enter vaiue a=");
	scanf("%d",&a);
	
		
	printf("enter vaiue b=");
	scanf("%d",&b);
	
		
	printf("enter vaiue c=");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
		printf("a is maximum");
	    }
     	else
     	{
		printf("c is maximum");
    	}
    }
	else
	{
	    if(b>c)
     	{
		printf("b is maximum");
    	}
    	else
	    {
		printf("c is maximum");
	    }
    }
}