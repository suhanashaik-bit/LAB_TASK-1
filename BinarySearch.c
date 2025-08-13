#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int target)
{
    int mid;

    if (left > right)
    {
        return -1;
    }
    else
    {
    	mid = left + (right - left) / 2;
    	if(arr[mid] == target)
            return mid;
    	else if (arr[mid] > target)
            return binarySearchRecursive(arr, left, mid - 1, target);
    	else
            return binarySearchRecursive(arr, mid + 1, right, target);
    }
}


int main()
{
    int arr[100], n, i, target;
   
    printf("\n Enter n:");
    scanf("%d",&n);
    printf("\n Enter elements in sorted order:\n");
    for(i=0;i<n;i++)
    {
	printf("\n Enter %dth Element",i);
	scanf("%d",&arr[i]);
    }
    printf("\n Enter searching element");
    scanf("%d",&target);
    i = binarySearch(arr, n, target);
    if (i != -1)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
        return 0;
}
