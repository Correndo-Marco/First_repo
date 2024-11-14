#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int n,guess,min,max;
srand(time(NULL));
printf("Inserire il numero massimo\t");
scanf("%d",&max);
printf("Inserire il numero minimo\t");
scanf("%d",&min);
if(max <= min){

}else{
	printf("\n\t--- Gioco partito ---\n");
	n= min + rand()%(max-min+1);
	printf("Inserisci un numero:\t");
	scanf("%d",&guess);
	if(guess>n){
		printf("Numero troppo grande\n\n");
	}else if(guess<n){
		printf("Numero troppo piccolo\n\n");
	}
	while(guess!=n){
		printf("Inserisci un altro numero:\t");
		scanf("%d",&guess);
        	if(guess>n){
                	printf("Numero troppo grande\n\n");
        	}else if(guess<n){
                	printf("Numero troppo piccolo\n\n");
        	}
	
	}
printf("Hai vinto, era %d\n",n);
}


return 0;

}
