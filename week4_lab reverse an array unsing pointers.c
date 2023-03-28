#include<stdio.h>

int main(){
	
	
	int n; 
	int *ptr;
	printf("enter the number of elements");
	scanf("%d",&n);
	
	int array[n],i;
	printf("enter the array elements\n");
	
	ptr = &array[0];
	for(i=0; i<n; i++){
		
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr = &array[n-1];
	
	printf("\nthe array elements in inverse order are:");
	
	for(i=n; i>0; i--){
		
		printf("\n %d ",  *ptr);
		
		ptr--;

    }
    
    printf("\n");

}
