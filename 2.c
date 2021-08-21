#include<stdio.h>
int main(void) {
   int n;
   printf("Enter the number of star rows: ");
   scanf("%d",&n);
   for(int i=n;i>0;i--) {
    for(int j=i;j>0;j--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
