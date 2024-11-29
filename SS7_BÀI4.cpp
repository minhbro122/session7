#include<stdio.h>

int main() {
	int length;
	printf("moi ban nhap vao length");
	scanf("%d",&length);
	
	int arr[length];
	
	for(int i = 0; i<= length -1; i++) {
		
		printf("moi ban nhap vao phan tu%d \n",i);
		
		scanf("%d",&arr[i]);
	}
	for( int i = 0 ; i <= length-1 ; i++ ){
		printf("phan tu arr[%d] la %d",i,arr[i]);
	}
	
	
	
	
	
	return 0; 
}
