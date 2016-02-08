#include "syslib.h"

int sys_int86(struct reg86u *reg86p)
{
    message m;

    return(_kernel_call(SYS_INT86, &m));
}