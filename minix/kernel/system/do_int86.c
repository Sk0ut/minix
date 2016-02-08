#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
 *                                do_int86                                   *
 *===========================================================================*/
int do_int86(struct proc *caller_ptr, message *m_ptr)
{
        return(OK);
}