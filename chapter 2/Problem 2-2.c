#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter total number of elements\t");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int j,temp;
    
	for(i=0;i<n-1;i++)
    {
		for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
