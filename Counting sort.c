#include<stdio.h>
void main(){
int a[30];
int x;
int c[30];
int b[30];
int max;
printf("enter array size : ");
scanf("%d",&x);
printf("\n");
printf("enter array  : ");
for(int i=0;i<x;i++){
    scanf("%d",&a[i]);
}
max=0;

for(int i=0;i<x;i++){
    if (max<a[i]){
        max=a[i];
    }
}
for(int i=0;i<=max;i++){
    c[i]=0;
}
for(int i=0;i<x;i++){
    c[a[i]]+=1;
}
for(int i=1;i<=max;i++){
    c[i]=c[i]+c[i-1];
}
for(int i=x-1;i>=0;i--){
    b[c[a[i]]]=a[i];
    c[a[i]]=c[a[i]]-1;
}
for(int i=0;i<x;i++){
    a[i]=b[i+1];
}
printf("Sorted array : ");

for(int i=0;i<x;i++){
    printf("%d ",a[i]);
}

}
