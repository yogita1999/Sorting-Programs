#include<stdio.h>
void heapify(int arr[], int n, int i)
{
    //with index 0
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	if (l < n && arr[l] > arr[largest])
		largest = l;


	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i)
	{
		int t=arr[i];
		arr[i]=arr[largest];
		arr[largest]=t;

		heapify(arr, n, largest);
	}
}


void build_heap(int arr[],int n){
for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

}

void heapSort(int arr[], int n)
{
	build_heap(arr,n);
	for (int i=n-1; i>0; i--)
	{
		int t=arr[i];
		arr[i]=arr[0];
		arr[0]=t;
		heapify(arr, i, 0);
	}
}



int main()
{
	int arr[30];
	int n;
	printf("enter array size : ");
    scanf("%d",&n);
    printf("\n");
    printf("enter array  : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


	heapSort(arr, n);
    printf("Sorted array : \n");
	for (int i=0; i<n; ++i)
        printf("%d ",arr[i]);

}
