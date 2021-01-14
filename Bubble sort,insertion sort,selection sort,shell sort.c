#include<stdio.h>
void main(){
int a[50];
int p;
int flag=0;
printf("enter array size : ");
scanf("%d",&p);
printf("enter values :");
for(int i = 0; i < p; ++i) {
        scanf("%d",&a[i]);
            }
/**

//Bubble sort


for (int i=0;i<p-1;i++){
        for(int j=0;j<p-i-1;j++){
        if (a[j]>a[j+1]){
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            flag=1;
        }

        }
        if (flag==0){
            printf("already sorted");
            break;
        }

}
for(int i = 0; i < p; ++i) {
        printf("%d ",a[i]);
            }









//selection Sort.
int min;
for (int i=0;i<p;i++){
        min=i;
        for(int j=i+1;j<p;j++){
            if(a[min]>a[j])
            {
                min=j;

            }

        }
        int t=a[min];
         a[min]=a[i];
         a[i]=t;


}
for(int i = 0; i < p; ++i) {
        printf("%d ",a[i]);
            }









//insertion sort

int key;
int j;
 for (int i=1;i<p;i++){
    key=a[i];
    j=i-1;
    while (j>=0 && key<a[j]){
        a[j+1]=a[j];
        j--;
        }
        a[j+1]=key;
    }

for(int i = 0; i < p; ++i) {
        printf("%d ",a[i]);
            }


***/





//shell sort
for(int gap=p/2;gap>0;gap/=2){
 for (int j=gap;j<p;j++){
       int temp=a[j];
    for(int i=j;a[i-gap]>temp && i>=gap;i-=gap){
        a[i]=a[i-gap];
        a[i-gap]=temp;
    }
 }

}

for(int i = 0; i < p; ++i) {
        printf("%d ",a[i]);
            }

            }
