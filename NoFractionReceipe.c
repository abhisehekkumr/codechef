#include<stdio.h>

int GCD(int a,int b){
  int t = b;

  while(b!=0){
  t = b;
  b = a%b;
  a = t;
  }
  return a;
}


int main(){
  int t;
  scanf("%d",&t);

  while(t--){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
      scanf("%d",&array[i]);

    int result = array[0];

    for(int i=1;i<n;i++)
      result = GCD(result,array[i]);

    for(int i=0;i<n;i++)
      printf("%d ",array[i]/result);

    printf("\n");
  }
}
