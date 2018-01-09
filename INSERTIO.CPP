#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[30000];

int i,j,key;
int n=30000;

void insort() //Comment useing master brance
{
   for(j=1;j<n;j++)
   {
       key=arr[j];
       i=j-1;
	 while(i>=0 && arr[i]>key)
	 {
	    arr[i+1]=arr[i];
	    i--;
	 }
       arr[i+1]=key;
   }
}

void main()
{
    clrscr();
    for(int k=0;k<=29999;k++)
     {
	arr[k]=rand();
     }
    for(k=0;k<=29999;k++)
     {
	printf("%d, ",arr[k]);
     }
    printf("\n");

    insort();
    printf("After sorting\n");

    for(k=0;k<=29999;k++)
    {
      printf("%d, ",arr[k]);
    }
   getch();
}
//We are just testing
