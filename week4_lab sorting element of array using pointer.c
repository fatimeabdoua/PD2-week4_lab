#include<stdio.h>

int main(){
	
	int *ptr, i , j , temp , n, array[n];
	
	printf("enter the number of elements:");
	scanf("%d", &n);
	ptr = array;
	printf("\nenter the array elements\n");
	for(i=0; i<n; i++){
		
		printf("\nelement - %d:",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0; i<n; i++){
		
		for(j=i+1; j<n; j++){
			
			if(*(ptr+i) > *(ptr+j)){
				
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	
	printf("\nthe array after sorting:\n");
	for(i=0; i<n; i++){
	printf("\nelement-%d:%d\n", i+1, *(ptr+i));
	}
	
	printf("\n");
}
