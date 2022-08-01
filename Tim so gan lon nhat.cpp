#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so can nhap vao n = ");
	scanf("%d",&n);

	int ary[n];
	int high;
	int min;
	int unhigh;
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	for(int i=1;i<n;i++){
		if(ary[i]>high){
			high=ary[i];
		}
	}
	printf("\nSo lon nhat la %d",high);
	
	min = ary[0];
	for(int i=1;i<n;i++){
		if(ary[i]<min){
			min=ary[i];
		}
	}
	if(high==min){
		printf("Cac so da nhap bang nhau");
	}else{
	unhigh = min;
	for(int i=1;i<n;i++){
		if(ary[i]>unhigh && ary[i]<high){
			unhigh=ary[i];
		}
	}
	printf("\nSo gan lon nhat la %d",unhigh);
	}
}