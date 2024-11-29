#include<stdio.h> 

int main () {
	int mang[5] = {3,5,8,9,6};
	
	int lonNhat= mang[0];
	int nhoNhat = mang[0]; 
	 printf("cac phan tu trong mang la 3,5,8,9,6\n");
	  for (int i =1;i  <5; i++) {
	  	if(mang[i]>lonNhat) {
	  		lonNhat=mang[i]; 
		  }
	if(mang[i]< nhoNhat){
		nhoNhat=mang[i];
	}
	  }
	
	printf("phan tu lon nhat la %d \n",lonNhat);
	printf("phan tu nho nhat la %d \n",nhoNhat);
	
	
	return 0; 
}
