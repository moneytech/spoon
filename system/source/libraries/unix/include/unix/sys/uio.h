#ifndef _SYS_UIO_H
#define _SYS_UIO_H


#include <sys/types.h>

struct iovec
{
	void   *iov_base; 
	size_t  iov_len;
};


#ifdef __cplusplus
extern "C" {
#endif
		

ssize_t readv(int, const struct iovec *, int);
ssize_t writev(int, const struct iovec *, int);


#ifdef __cplusplus
}
#endif
		


#endif

