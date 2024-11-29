#include<stdio.h> 


int main() {
	
	
	int n[5] ={1,5,3,7,9};
	int soChan =0;
	
	for(int i=0 ; i<5; i++){
		if(n[i] % 2==0){
			printf("so chan la %d\n",n[i]);
			soChan = 1; 
		}
	}
	if(!soChan) {
		printf("mang khong chua so chan");
	}
	
	
	
	
	return 0; 
}
