#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<5;i=i+0){
		for(int j=i+1;j<5;j++){
			for(int k=j;k<5+1;k++){
				if(k%2==0){
				printf("\n hungry");}
			}
			printf("\n eating");
		}
		printf("\n thinking");
	}
}
