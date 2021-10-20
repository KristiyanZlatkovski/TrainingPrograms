
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
printf("Vuvedete purvia chlen na aritmetichnata progresia:");
scanf("%d",&a);
printf("Vuvedete razlikata na aritmetichnata progresia:");
scanf("%d",&b);
for(int i=0;i<1000;i++){
	printf("%d,",a);
	a+=b;
}
	system("pause");
	return 0;
}

