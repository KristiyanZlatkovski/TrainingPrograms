#include <stdio.h>
#include <stdlib.h>


int main(){
    int A,B,C,D,E,F,G,H,I,J;
  printf("Vuvedi A:");  scanf("%d",&A);
  printf("Vuvedi B:");  scanf("%d",&B);
  printf("Vuvedi C:");  scanf("%d",&C);
  printf("Vuvedi D:");  scanf("%d",&D);
  printf("Vuvedi E:");  scanf("%d",&E);
  printf("Vuvedi F:");  scanf("%d",&F);
  printf("Vuvedi G:");  scanf("%d",&G);
  printf("Vuvedi H:");  scanf("%d",&H);
  printf("Vuvedi I:");  scanf("%d",&I);
  printf("Vuvedi J:");  scanf("%d",&J);
  
    printf("Chislata v intervala (%d,%d) sa:",A,B);
   for (int i = A; i <= B; i++){
		if (    (i % 2 == 0)&&(i%10==8)  ){
			printf("%d,",i);
		}
		}
		printf("\n");
     printf("Chislata v intervala (%d,%d) sa:",C,D);
   for (int j = C; j <= D; j++){
		if (    (j % 2 == 0)&&(j%10==8)  ){
			printf("%d,",j);
		}
		}
		printf("\n");
     printf("Chislata v intervala (%d,%d) sa:",E,F);
   for (int i = E; i <= F; i++){
		if (    (i % 2 == 0)&&(i%10==8)  ){
			printf("%d,",i);
		}
		}
		printf("\n");
     printf("Chislata v intervala (%d,%d) sa:",G,H);
   for (int i = G; i <= H; i++){
		if (    (i % 2 == 0)&&(i%10==8)  ){
			printf("%d,",i);
		}
		}
		printf("\n");
     printf("Chislata v intervala (%d,%d) sa:",I,J);
   for (int h = I; h <= J; h++){
		if (    (h % 2 == 0)&&(h%10==8)  ){
			printf("%d,",h);
		}
		}
    	printf("\n");
    
    
    
    
    
     system("pause");
     return 0;
    }
