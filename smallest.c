#include<stdio.h>



long sum_two_smallest_numbers(size_t n, const int numbers[n]){
	size_t temp = 0;
	int i, j, x;
	int sorted[n];
	for(i=0;i<n; i++){
		sorted[i]=numbers[i];
	}
	for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			if (sorted[i] > sorted[j]){
			temp = sorted[i];
			sorted[i] = sorted[j];
			sorted[j] = temp; 
			}
		}
	}
	x = sorted[n-1] + sorted[n-2];
	for(i=0; i < n; i++){
		printf("%d\n", sorted[i]);
	}
	return x;
}

int main(){
	int numbers[]={19,5,42,2,77};
	int sum = sum_two_smallest_numbers(5, numbers);
	printf("%d\n", sum);
}
