#include <stdio.h>
#include "init.h"

void func1(void)
{
	printf("this is %s\n", __FUNCTION__);
}

void func2(void)
{
	printf("this is %s\n", __FUNCTION__);
}

void func3(void)
{
	printf("this is %s\n", __FUNCTION__);
}

void func4(void)
{
	printf("this is %s\n", __FUNCTION__);
}

call_back0(func1);
call_back0(func2);
call_back0(func3);
call_back0(func4);

int main(void)
{
	do_callback();
}


