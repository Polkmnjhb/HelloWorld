#include <stdio.h>

int main()
{
	char name[50]="Kuo DTT";
	printf("%d \n",name);
	printf("%s \n",name);
	printf("%d \n",name+10);
	printf("%u \n",name);
	printf("Hello World\n");
	for(int i=0;i<50;++i)
	{
		printf("%d ; %c\n" , i ,name[i]);
	}
}
