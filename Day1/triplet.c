#include<stdio.h>

int main()
{
	int n=3,al=0,bb=0,i,a[3],b[3];
	//alice part
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bob part
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	//compare part
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			al+=0;
			bb+=0;
		}
		else if(a[i]>b[i])
		{
			al+=1;
			bb+=0;
		}
		else
		{
			bb+=1;
			al+=0;
		}
	}

	//alice and bob points
	printf("%d %d",al,bb);

}



/* output 
 aishwariya@linux:~/Hackerrank$ ./a.out
5 6 7
3 6 10
1 1
 */
