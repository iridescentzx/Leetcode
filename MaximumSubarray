#include<stdio.h>// using a dynamic programming idea to get a O(n)
int maxSubArray(int A[], int n) {
    int maxSum, sum, i;
    sum = 0;
    maxSum = A[0];
    for(i = 0; i < n; i++){
        sum += A[i];
        if(sum > maxSum)
            maxSum = sum;
        if(sum < 0)
            sum = 0;
    }
    return maxSum;
}
int main(){
	int n;
	scanf("%d", &n);
	int i, A[n];
	for(i = 0;i<n;i++){
		scanf("%d", &A[i]);
	}
	int s;
	s = maxSubArray(A, n);
	printf("%d\n", s);


} 
