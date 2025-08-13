#include <stdio.h>

int linearSearch(int arr[], int n, int target) 
{
    int i;
    for(i=0; i<n; i++) 
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[100], n, i, target;
   
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("\n Enter %dth Element",i);
	scanf("%d",&arr[i]);
    }
    printf("\n Enter searching element");
    scanf("%d",&target);
    i = linearSearch(arr, n, target);
    if (i != -1)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
}
