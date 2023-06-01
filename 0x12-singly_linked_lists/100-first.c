#include "lists.h"

void call(void) __attribute__ ((constructor));

/**
 * call - prints a sentence before the main
 *
 * function executed
 *
 * Return : none
 */
void call(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
