#include "assert.h"
#include "stdio.h"

int main(void)
{
	FILE *f = fopen("result.txt", "wt");
	fprintf(f, "Hello World\n");
	fclose(f);

	assert(0);
	return 0;
}
