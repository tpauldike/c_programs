#include <unistd.h>

ssize_t _puts(char *str);
int main(void)
{
	_puts("Omolola\n Omotalade");

	return 0;
}

ssize_t _puts(char str[])
{
	return write(1, str, 8);
}
