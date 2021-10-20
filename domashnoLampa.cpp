
#include <stdio.h>
#include <stdlib.h>
int main(){
	int status;
	int on=0;
	int off=0;
	int maxTime=24;
		printf("Vuvedete 1 za vkliuchvane na lampata za 1 chas i 0 za izkliuchvane na lampata za 1 chas i 10 za krai na cikula\n");
	while(status!=10&&(on+off)!=maxTime){
	
scanf("%d",&status);
if(status==1){
on+=1;
}
if(status==0){
off+=1;
}
}
printf("Vremeto za koeto lampata e bila vklicuhena e:%d chasa\n",on);
printf("Vremeto za koeto lampata e bila vklicuhena e:%d chasa\n",off);
system("pause");

}
