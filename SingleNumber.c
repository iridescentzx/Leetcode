#include<stdio.h>
int singleNumber(int A[], int n) {
    int sum, i;
    sum = A[0];
    for(i = 1; i < n; i++){
        sum = A[i] ^ sum; //XOR operation
    }
    return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	int i, A[n];
	for(i = 0;i<n;i++){
		scanf("%d", &A[i]);
	}
	int s;
	s = singleNumber(A, n);
	printf("%d\n", s);
	return 0;

} 
