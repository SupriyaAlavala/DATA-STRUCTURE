#include<stdio.h>
  
// Function for finding the winning child. 
 int find( int n, int k) 
{ 
     int sum = 0, i; 
  
    // For finding out the removed  
    // chairs in each iteration 
    for (i = 2; i <= n; i++) 
        sum = (sum + k) % i; 
  
    return sum + 1; 
} 
  
// Driver function to find the winning child 
int main() 
{ 
    int n,k;
    printf("enter the n and k values:\n");
    scanf("%d%d",&n,&k);
    printf("the last person:%d",find(n,k));
    return 0; 
} 
