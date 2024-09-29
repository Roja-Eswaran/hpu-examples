#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int *ptr = malloc(sizeof(int));
	*ptr = 10;
	printf("Val before free:%d addr:%p\n", *ptr, ptr);

	free (ptr); //ptr is a dangling pointer now
	printf("Val after free:%d addr:%p\n", *ptr, ptr);
	
	*ptr = 15;
	printf("Security Threat!!!\nVal:%d addr:%p\n", *ptr, ptr);
	
	return 0;	
}
