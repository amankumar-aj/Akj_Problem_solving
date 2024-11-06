/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:55 AM
*/
/*
  pattern 1
  1
  2 3
  3 4 5
  4 5 6 7
 */
#include<stdio.h>
int main(){

  for(int i=1;i<=4;i++){
      int k=i;
      for (int j=1;j<i+1;j++)
      {
        printf("%d ",k);
          k++;
      }
      printf("\n");
  }
  return 0;
}
