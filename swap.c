#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

void swap_max(int arr[],int l,int n)
{
 int max=arr[n];
 int index=n;
 int i;
 for(i=n;i<l;i++)
 {
  if(arr[i]>max)
  {
    max=arr[i];
    index=i;
  }
 }
 int temp;
 temp=arr[n];
 arr[n]=max;
 arr[index]=temp;
}


void ssort(int arr[],int l)
{
 int  i;
 for(i=0;i<l;i++)
   swap_max(arr,l,i);
}
