#include<stdio.h>
void linearsearch(int arr[],int n,int key){
	int i,j;
	int found=0;
	for(i=0;i<n;i++){
	
	   if(arr[i]==key){
	   	printf("found");
	   	found=1;
	   	break;
	   }
}
	
	if(!found){
		printf("not found");
	}

	}
int main(){
	int n,key,arr[n];
	scanf("%d",&n);
	printf("\nenter the srray elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	linearsearch(arr,n,key);
}
