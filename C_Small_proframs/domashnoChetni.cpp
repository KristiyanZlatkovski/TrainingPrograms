

#include <stdio.h>
#include <stdlib.h>


int main()
{

	int a, b, c, d;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	printf("Vuvedete stoinosta na A:");
	scanf("%d",&a);
	printf("Vuvedete stoinosta na B:");
	scanf("%d", &b);
	printf("Vuvedete stoinosta na C:");
	scanf("%d", &c);
	printf("Vuvedete stoinosta na D:");
	scanf("%d", &d);

	for (int i = a; i <= b; i++){
		if (i % 2 == 0){
			sum1 += i;
		}
		if(  (i>=3000&&i<4000) || ((i%1000)>=300&&(i%1000)<400) || (i%100>=30)&&(i%100<40) || (i%10==3) ){
		sum3+=i;
		}
		}
	
	for (int i = c+1; i < d; i++){
		if (i % 2 == 0){
			sum2 += i;
		}
		if(  (i>=3000&&i<4000) || ((i%1000)>=300&&(i%1000)<400) || (i%100>=30)&&(i%100<40) || (i%10==3) ){
		sum4+=i;
		}
	}
	printf("===============================================================================\n");
	printf("sumata na vsichki chetni chisla v intervala [%d,%d] e %d\n",a,b,sum1);
	printf("sumata na vsichki chetni chisla v intervala (%d,%d) e %d\n", c, d, sum2);
	printf("===============================================================================\n");
	printf("sumata na vsichki  chisla sudurjashti cifrata 3 v intervala [%d,%d] e %d\n",a,b,sum3);
	printf("sumata na vsichki  chisla sudurjashti cifrata 3 v intervala (%d,%d) e %d\n", c, d, sum4);
	printf("===============================================================================\n");
	
	system("pause");
	return 0;
}

