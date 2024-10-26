/*
 Created by AMAN KUMAR JHA on 09/17/2024 TIME - 12:48 AM
*/

// Q - https://www.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/0

int chocolates(int arr[], int l, int r) {
    // code here  MY-CODE[solution]
    long long  min=1e9+1;
    for(int i=l;i<=r;i++){

        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;

}