#include <stdio.h>
#include "common.h"
#include "app2.h"

int main()
{
	printf("hello, %s\n", APP2_GREETING);
	printf("common var is: %d\n", COMMON_VAR);
	common_fun();
}
