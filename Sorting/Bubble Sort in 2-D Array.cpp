#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],b[9];
	int i,j,k,t=0;
	printf("Enter elements in Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[t]=a[i][j];
			t++;
		}
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<8-i;j++)
		{
			if(b[j]>b[j+1])
			{
				k=b[j];
				b[j] = b[j+1];
				b[j+1]= k;
			}
		}
	}
	t=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=b[t];
			t++;
		}
	}
	printf("Matrix after sorting : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
