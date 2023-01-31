#include "stdio.h"

int main(void)
{
	FILE *f = fopen("result.txt", "wt");
	fprintf(f, "Hello World\n");
	fclose(f);

	return 0;
}
