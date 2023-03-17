#include <stdio.h>
#include <string.h>

int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    fwrite(quote, sizeof(char), strlen(quote), stdout);
    return (1);
}