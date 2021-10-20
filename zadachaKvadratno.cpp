// ConsoleApplication3.cpp : Defines the entry point for the console application.
//


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	int disc;
	int root1, root2;

	printf("Vuvedete A:");
	scanf("%d", &a);
	printf("Vuvedete B:");
	scanf("%d", &b);
	printf("Vuvedete C:");
	scanf("%d", &c);

	disc = (b * b) - (4*a*c);

	
	printf("Discriminantata e:%d\n",disc);
	if (disc > 0) {
	 	root1 = ((-b) + (sqrt(disc)))/2*a;
		root2 = ((-b) - (sqrt(disc))) / 2 * a;
		printf("X1=%d X2=%d", root1,root2);
	}
    if(disc==0){
    	root1=root2=(-b)/(2*a);
    	printf("X1=%d X2=%d\n", root1,root2);
	}
	if(disc<0){
	printf("X1=(%d+i(%d)^1/2)/%d\n",-b,-disc,2*a);
	printf("X2=(%d-i(%d)^1/2)/%d\n",-b,-disc,2*a);
	
	}
	

	system("pause");
    return 0;
}

