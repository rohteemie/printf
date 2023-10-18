#include "../main.h"

int main(void)
{
	char *name = "Rotimi\n";

	int bf = buffer_print(name, 4);
	printf("\n%d\n", bf);
	return (0);
}

/* gcc test/test_buffer_print.c helper/buffer_print.c -o buffer_print */