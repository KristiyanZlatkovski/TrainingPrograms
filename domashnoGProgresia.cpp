
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b;
	long long a;
printf("Vuvedete purvia chlen na geometrichnata progresia progresia:");
scanf("%d",&a);
printf("Vuvedete chastnoto na geometrichnata progresia:");
scanf("%d",&b);
for(int i=0;i<10;i++){
	printf("%d,",a);
	a*=b;
}
	system("pause");
	return 0;
}

