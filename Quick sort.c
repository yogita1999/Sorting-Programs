#include<stdio.h>
int partition(int a[],int p,int r){
int pivot=a[r];
int i=p-1;
 for(int j=p;j<r;j++){
    if (a[j]<=pivot){
        i++;
        int t=a[j];
        a[j]=a[i];
        a[i]=t;
    }

 }
int t=a[i+1];
a[i+1]=a[r];
a[r]=t;
return (i+1);

}
void quicksort(int a[],int p,int r){
int q;
if (p<r){
    q=partition(a,p,r);
    quicksort(a,p,q-1);
    quicksort(a,q+1,r);
}

}



void main(){
int a[30];
int p=0;
int r;
printf("enter array size : ");
    scanf("%d",&r);
    printf("\n");
    printf("enter array  : ");
    for(int i=0;i<r;i++){
        scanf("%d",&a[i]);
    }
r--;


quicksort(a,p,r);
printf("Sorted array : \n");
for(int i=0;i<r+1;i++){
    printf("%d ",a[i]);
}
}
