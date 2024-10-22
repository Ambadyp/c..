#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n[10],a[10],b[10],size,i,bin[10],sub1[10],sub2[10],sub1size,sub2size,bin1[10],j,k,flag;
	printf("\n enter the limit (not more than 10)\t");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
	{
		n[i]=i;
	}
	printf("\nnumbers are :");
	for(i=1;i<=size;i++)
	{
		printf("\t%d",n[i]);
	}
	printf("\n binary equalent is ");
	for(i=1;i<=size;i++)
	{
		if(n[i]==i)
		{
			bin[i]=1;
		}
		else
		{
			bin[i]=0;
		}	
	}
	for(i=1;i<=size;i++)
	{
		printf("\n %d",bin[i]);
	}
	printf("enter the size of first sub set\n");
	scanf("%d",&sub1size);
	printf("\n enter the substring that is in the limit \t");
	for(i=1;i<=sub1size;i++)
	{	
		scanf("%d",&sub1[i]);
	}
	printf(" first sub set is :\n");
	for(i=1;i<=sub1size;i++)
	{	
		printf("\n%d",sub1[i]);
	}
//binary
	k=0;
	for(i=1;i<=size;i++,k++)
	{
		flag=0;
		for(j=1;j<=sub1size;j++)
		{	
			if(k==sub1[j])
			{
				bin1[i]=1;
				flag++;
			}
		}
		if(flag==0);
		{
			bin[i]=0;
		}
	}
	for(i=1;i<=size;i++)
	{
		printf("\n %d",bin1[i]);
	}



			

}
	
