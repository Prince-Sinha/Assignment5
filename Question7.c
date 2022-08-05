#include<stdio.h>
int main(){
  int i,n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  for(i=2*n;i>=2;i-=2){

       printf("\n%d",i);
  }


    return 0;
}