#include <stdio.h>
#include <string.h>

int main(void)
{
	char *q = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(q, sizeof(char), strlen(q), stdout);
	return (1);
}
