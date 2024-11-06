/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:57 AM
*/
/*Pattern 4
* A
  B C
  C D E
  D E F G
 */
#include<stdio.h>
int main() {
     for(int i=1;i<=4;i++){
      char k='A'+i-1;
      for (int j=1;j<i+1;j++)
      {
        printf("%c ",k);
          k++;
      }
      printf("\n");
  }
}