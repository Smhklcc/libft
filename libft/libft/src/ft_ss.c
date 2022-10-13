#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "iyi ve kötü";
	char d[] = "ve";

	char *f = strnstr(s, d, 5);

	printf("%s", f);
}
