#include <stdio.h>
void display(int *arr,int n)
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
}
void insertion_sort(int *arr,int n,int debug)
{
  int key;
  for(int i = 1; i < n ; i++)
    {
      int j;
      key = arr[i];
      for(j = i; j>0; j--)
	{
	  if (key< arr[j-1])
	    {
	      arr[j] = arr[j-1];
	    }
	  else{
	    break;
	   }
      if(debug)
	  {
	    display(arr,n);
	  }
	}
      arr[j] = key;
    }
}

int main(int argc,char* argv[])
{
  int n;
  printf("Enter the number of elements to enter\n");
  scanf("%d",&n);
  printf("Enter the numbers\n");
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("Before Sorting\n");
  display(arr,n);
  printf("After Insertion Sort\n");
  insertion_sort(arr,n,1);
  display(arr,n);
  return 0;
}
      
