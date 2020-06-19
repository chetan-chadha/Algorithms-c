#include<stdio.h>
void display(int *arr,int n)
{
  for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
}

void swap(int *first,int *second)
{
  int temp = *first;
  *first = *second;
  *second = temp;
}

void bubble_sort(int *arr,int n)
{
  for(int i = 0;i<n-1;i++)
    {
      for(int j = 0;j<n-1-i;j++)
	{
	  if(arr[j]>arr[j+1])
	    {
	      swap(&arr[j],&arr[j+1]);
	    }
	}
    }
}

int main()
{
  int n;
  printf("Enter size of the array\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the numbers\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("Orignal List\n");
  display(arr,n);
  printf("Sorted List\n");
  bubble_sort(arr,n);
  display(arr,n);
  return 0;
}
