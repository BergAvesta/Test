#include <stdio.h>

int main()

{
	char H[50]="HelloWorld!" ;
	printf("H=%s \n",H);
	printf("H=%d \n",H);
	for(int i=0;i<20;i++)
	{
	printf("H=%c \n",H[2*i]);
	}
	printf("H=%u \n",H);
	printf("H=%f \n",H);
	return 0;
}

