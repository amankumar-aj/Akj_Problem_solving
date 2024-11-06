/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:56 AM
*/
/*
* Pattern for N = 4
1
2 3
3 4 5
4 5 6 7
 */
#include <stdio.h>
int main(){
int n=4;
  for(int i=1;i<=n;i++){
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


