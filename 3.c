#include<stdio.h>
int main(void) {
  for(int i=1;i<=5;i++) {
    for(int j=1;j<=i;j++) {
       if(j==i) {
         printf("*");
      }
       else {
         printf(" ");
       }
    }
    printf("\n");
  }
  return 0;
}
