#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);

	while(t--){
		float item,price;
		scanf("%f %f",&item,&price);

		if(item > 1000){
			printf("%f0.6\n",item*price*0.90);
		}else 
			printf("%f0.6\n",item*price);
	}
}