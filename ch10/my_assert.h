#ifndef MY_ASSERT_H
#define MY_ASSERT_H
#include <stdio.h>
#include <stdlib.h>

#ifdef NDEBUG
#define my_assert(expr) ((void)0)
#else
#define my_assert(expr) \
    ((expr) ? (void)0 : \
     (fprintf(stderr, "%s:%d: %s: Assertion `%s' failed.\n", \
              __FILE__, __LINE__, __func__, #expr), abort()))
#endif
#endif
