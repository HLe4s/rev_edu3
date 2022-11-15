#include <stdio.h>

int vuln(void) 
{
	char buf[0x30];

	scanf("%s", buf);
	printf("%s\n", buf);

	return 0;
}

int main(void)
{
	int abc = 0;

	vuln();
	printf("%d", abc);

	return 0;
}



