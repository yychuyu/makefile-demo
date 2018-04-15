#include <stdio.h>
#include "common.h"
#include "app1.h"

int main()
{
	printf("hello, %s\n", APP1_GREETING);
	printf("common var is: %d\n", COMMON_VAR);
	common_fun();
}
