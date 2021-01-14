#include<stdio.h>
void merge(int a[],int p,int mid,int r){
int i=p;
int j=mid+1;
int c[20];
int k=p;
while (i<mid+1 && j<r+1){
    if (a[i]>a[j]){
        c[k]=a[j];
        j++;
    }
    else
        {c[k]=a[i];
        i++;}
    k++;
}
while (i<mid+1){
    c[k]=a[i];
    i++;
    k++;
}
while(j<r+1){
    c[k]=a[j];
    j++;
    k++;
}
for(k=p;k<=r;k++)
    {
        a[k]=c[k];

    }

}
void mergesort(int a[],int p,int r){
    if (p<r){
        int mid=(p+r)/2;
        mergesort(a,p,mid);
        mergesort(a,mid+1,r);
        merge(a,p,mid,r);
    }
}
void main(){
int a[30];
int n;
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
mergesort(a,p,r);
printf("Sorted array : \n");
for(int i=0;i<=r;i++)
        printf("%d\n",a[i]);
}
