#include<stdio.h>
int main(){
  int i,n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  for(i=1;i<=10;i++){

       printf("\n%dx%d=%d",n,i,n*i);
  }


    return 0;
}