#include <stdio.h>

int main ()
{
	FILE *p = fopen("new.txt", "W");
	

	fclose(p);
	return 0;
}


