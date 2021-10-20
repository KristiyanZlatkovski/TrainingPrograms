
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int a=0;
    int b=1;
    int number;
    int c=0;
    printf("Vuvedete broia na chislata: ");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        
    	a=b;
    	printf("%d,",b);
    	b+=c;
		c=a;	
	}
	printf("\n");
	system("pause");
	return 0;
}

