#include<stdio.h>

int isprime(int);

int main()
{
	int i,n,range;
	printf("Enter the group strength and range\n");
	scanf("%d\n%d",&n,&range);
    switch(n)
    {
    	case 2:
        	for(i=1;i<=(range-6);i=i+6)
        	{
            	if(isprime(i) && isprime(i+6))
            	{
                	printf("[%d,%d]",i,i+6);
                	printf("\n");
            	}
        	}
        	for(i=5;i<=(range-6);i=i+6)
        	{
            	if(isprime(i) && isprime(i+6))
            	{
                	printf("[%d,%d]",i,i+6);
                	printf("\n");
            	}
        	}

        	break;

    	case 3:
            for(i=1;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12))
                {
                    printf("[%d,%d,%d]",i,i+6,i+12);
                    printf("\n");
                }
            }
            for(i=5;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12))
                {
                    printf("[%d,%d,%d]",i,i+6,(i+12));
                    printf("\n");
                }
            }
            break;

    	case 4:
    		for(i=1;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12) && isprime(i+18))
                {
                    printf("[%d,%d,%d,%d]",i,i+6,i+12,i+18);
                    printf("\n");
                }
            }
            for(i=5;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12) && isprime(i+18))
                {
                    printf("[%d,%d,%d,%d]",i,i+6,i+12,i+18);
                    printf("\n");
                }
            }
            break;

         case 5:

         	for(i=1;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12) && isprime(i+18) && isprime(i+24))
                {
                    printf("[%d,%d,%d,%d,%d]",i,i+6,i+12,i+18,i+24);
                    printf("\n");
                }
            }
            for(i=5;i<=(range-6);i=i+6)
            {
                if(isprime(i) && isprime(i+6) && isprime(i+12) && isprime(i+18) && isprime(i+24))
                {
                    printf("[%d,%d,%d,%d,%d]",i,i+6,i+12,i+18,i+24);
                    printf("\n");
                }
            }
            break;


    }

 }



int isprime(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			return 0;
			break;
		}

	}
	return 1;
}
