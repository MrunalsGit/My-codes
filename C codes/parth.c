#include<stdio.h>
int main(){

int a[]={1,2,3,4,5};
int i,sum=0,*ptr=a+3;
for (i=0; i<5; i++){
    sum=sum+*ptr;
    a[i]=sum;
}
for (i=0; i<5; i++){
    printf("%d\n", a[i]);
}
return 0;



}