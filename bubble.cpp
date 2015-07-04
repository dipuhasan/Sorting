#include <stdio.h>
int main() {
    
	int n, a[1010], i, j, temp;
	scanf("%d", &n);
	
	for(i = 0; i<n; i++){
	    scanf("%d", &a[i]);
	}
	for(i = 0; i<n; i++){
	    for(j = i+1; j<n; j++){
	        if(a[i] > a[j]){
	            temp = a[i];
	            a[i] = a[j];
	            a[j] = temp;
	        }
	    }
	}
	for(i = 0; i<n; i++){
	    printf("%d ", a[i]);
	}
	    
	printf("\n");
	
	
	return 0;
}
