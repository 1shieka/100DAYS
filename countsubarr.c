//print the count of subarrays having sum zero 
//subarrays are continuous part of the array

#include <stdio.h>
int main() {
  int n;
  
  scanf("%d" , &n);
  int arr[n];

  for (int i=0; i<n; i++){ //Read array elements 
      scanf("%d", &arr[i]);
  }

int prefix[n+1]; //Prefix sum array 
prefix[0]=0;

for (int i=1; i<=n; i++){ //Build prefix sums  
      prefix[i] = prefix[i-1] + arr[i-1];
}

int count = 0;

for (int i=0; i<n; i++){ //Here we compare every pair of prefix sum
  for (int j=1+i; j<=n; j++){

      if (prefix[i] == prefix[j]){ //If prefix sums are equal, subarrayy sum is zero
         count++;
      }
   }
}
  printf("%d", count);
  return 0;
}

// 1. Build a prefix sum array.
// 2. The sum of subarray (i to j) is: prefix[j + 1] - prefix[i]
// 3. If two prefix sums are equal, their difference is zero.
// 4. Therefore, every pair of equal prefix sums represents one zero-sum subarray.
// 5. Compare every pair of prefix sums and count how many are equal.

