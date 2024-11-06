/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:57 AM
*/
/* Pattern 3
*   A
    B   B
    C   C   C
 */
#include<stdio.h>
int main(){
int n=3;
     char ch;
     for (int i = 1; i <= n; i++) {
       ch = 'A' + i - 1;
       for (int j = 1; j <= i; j++) {
         printf("%c ", ch); }
       printf("\n");
     }
  return 0;
}
