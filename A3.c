//Read and store the roll no and marks of 20 students using 2D array
#include<stdio.h>
void main()
{

int m,n,i,j;
//	m=column amd n=row
//for this program row is 21 and column is 2
    printf("Enter the row:");
    scanf("%d",&n);
    printf("Enter the column:");
    scanf("%d",&m);
	int a[n][m],pos=0,neg=0;
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			printf("Enter the value of a[%d][%d] element of matrix:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("rollno \tmarks\n");
	
	for (i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
			printf("%d\t",a[i][j]);
		}
			printf("\n");

	}
}
