#include<stdio.h> 

  int main(){
  	
  	int mang[5];
  	
  	 printf("moi ban nhap 5 so nguyen\n");
  	 
  for(int i = 0; i<5 ; i++){
  	
  	printf("phan tu thu %d la ",i + 1);
  	
  	scanf("%d",&mang[i]);
  	
  	
  	
  }	
  	 printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }

    printf("\n");
  	
  	
  	return 0; 
  }
