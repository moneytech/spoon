#ifndef _KERNEL_i686_EFLAGS_H
#define _KERNEL_i686_EFLAGS_H


// this is required for all eflags
#define EFLAG_BASE			0x2

#define EFLAG_CARRY			0x1
#define EFLAG_PARITY			0x4
#define EFLAG_AUX_CARRY			0x10
#define EFLAG_ZERO     			0x40
#define EFLAG_SIGN     			0x80
#define EFLAG_TRAP     			0x100
#define EFLAG_INTERRUPT			0x200
#define EFLAG_DIRECTION			0x400
#define EFLAG_OVERFLOW			0x800

#define EFLAG_IOPL0			0x0		
#define EFLAG_IOPL1			0x1000
#define EFLAG_IOPL2			0x2000
#define EFLAG_IOPL3			0x3000

#define EFLAG_NESTED_TASK		0x4000
#define EFLAG_RESUME_FLAG		0x10000
#define EFLAG_V86			0x20000
#define EFLAG_ALIGNMENT_CHECK		0x40000
#define EFLAG_VIRTUAL_INTERRUPT		0x80000
#define EFLAG_VIRTUAL_INTERRUPT_PENDING	0x100000
#define EFLAG_ID			0x200000



#endif


