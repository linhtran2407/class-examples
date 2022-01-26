#include <stdio.h>
#include <stdlib.h>

int largest (int arr[], int n){
	int res = arr[0];
	int i;
	for (i=0; i < n; i=i+1){
		if (arr[i] > res){
			res = arr[i];
		}
	}

	return res;
}

int main(){
	int values[10];
	int i;
	for (i = 0; i < 10; i=i+1){
		values[i] = rand();
		printf("%d\n", values[i]);
	}
	printf("The largest is %d\n", largest (values, 10));
}


